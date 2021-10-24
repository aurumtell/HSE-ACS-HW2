//
// Created by Dayana on 19.10.2021.
//

#ifndef __documentary__
#define __documentary__

#include "movie.h"
#include <cstdio>

class Documentary : public Movie {
public:
    ~Documentary() override = default;

    // Ввод параметров из файла
    void In(FILE *file) override;

    // Случайный ввод параметров
    void InRandom() override;

    // Вывод параметров в форматируемый поток
    void Out(FILE *file) override;

    double Quotient() override;

private:
    const char *name;
    int year;
    int duration;
};


#endif//__documentary__
