#include "documentary.h"
#include <cstdio>

void Documentary::In(FILE *file) {
    name = Utils::readStr(file);
    year = Utils::readInteger(file);
    duration = Utils::readInteger(file);
}

void Documentary::InRandom() {
    name = Utils::randomStr(Utils::rndInteger(5, 10));
    year = Utils::rndInteger(1950, 2021);
    duration = Utils::rndInteger(1, 100);
}

void Documentary::Out(FILE *file) {
    fprintf(file,
            "Documentary: name = %s, year = %d, duration = %d, Quotient = ",
            name,
            year,
            duration);
    fprintf(file, "%f\n", Quotient());
}

double Documentary::Quotient() {
    return static_cast<double>(year) / static_cast<double>(strlen(name));
}