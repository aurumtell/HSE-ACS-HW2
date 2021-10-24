#include <cstdio>
#include "container.h"

//------------------------------------------------------------------------------
// Конструктор контейнера
Container::Container() : length{0} {}

//------------------------------------------------------------------------------
// Деструктор контейнера
Container::~Container() {
    for (int i = 0; i < length; i++) {
        delete container[i];
    }
    length = 0;
}

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
void Container::In(FILE *file) {
    while (!feof(file)) {
        if ((container[length] = Movie::StaticIn(file)) != nullptr) {
            length++;
        }
    }
}

//------------------------------------------------------------------------------
// Случайный ввод содержимого контейнера
void Container::InRnd(int size) {
    while (length < size) {
        if ((container[length] = Movie::StaticInRnd()) != nullptr) {
            length++;
        }
    }
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void Container::Out(FILE *file) {
    fprintf(file, "Container contains %d elements.\n", length);

    for (int i = 0; i < length; i++) {
        fprintf(file, "%d: ", i + 1);
        container[i]->Out(file);
    }
}


//------------------------------------------------------------------------------
// Сортировка
void Container::StraightSelectionSort() {
    for (int i = 0; i < length; ++i) {
        int min_index = i;
        for (int j = i; j < length; ++j) {
            if (container[j]->Quotient() < container[min_index]->Quotient()) {
                min_index = j;
            }
        }
        Movie *tmp = container[i];
        container[i] = container[min_index];
        container[min_index] = tmp;
    }
}