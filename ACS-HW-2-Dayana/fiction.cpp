//
// Created by Islombek on 22.10.2021.
//

#include "fiction.h"

void Fiction::In(FILE *file) {
    name = Utils::readStr(file);
    year = Utils::readInteger(file);
    director = Utils::readStr(file);
}

void Fiction::InRandom() {
    name = Utils::randomStr(Utils::rndInteger(5, 10));
    year = Utils::rndInteger(1950, 2021);
    director = Utils::randomStr(Utils::rndInteger(5, 10));
}

void Fiction::Out(FILE *file) {
    fprintf(file,
            "Fiction: name = %s, year = %d, director = %s, Quotient = ",
            name,
            year,
            director);
    fprintf(file, "%f\n", Quotient());
}

double Fiction::Quotient() {
    return static_cast<double>(year) / static_cast<double>(strlen(name));
}
