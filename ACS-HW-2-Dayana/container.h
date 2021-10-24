//
// Created by Dayana on 19.10.2021.
//

#ifndef __container__
#define __container__

//------------------------------------------------------------------------------
// container.h - содержит тип данных, представляющий простейший контейнер
//------------------------------------------------------------------------------

#include "movie.h"
#include <cstdio>

class Container {
public:
    Container();

    ~Container();

    // Ввод содержимого контейнера из указанного потока
    void In(FILE *file);

    // Случайный ввод содержимого контейнера
    void InRnd(int size);

    // Вывод содержимого контейнера в указанный поток
    void Out(FILE *file);

    // Сортировка по убыванию
    void StraightSelectionSort();

private:
    int length; // текущая длина
    Movie *container[10000]{};
};

#endif
