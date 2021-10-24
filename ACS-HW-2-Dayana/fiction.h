//
// Created by Islombek on 22.10.2021.
//

#ifndef ACS_HW_2_DAYANA_FICTION_H
#define ACS_HW_2_DAYANA_FICTION_H

#include "movie.h"
#include <cstdio>

class Fiction : public Movie {
public:
    ~Fiction() override = default;

    // Ввод параметров из файла
    void In(FILE *file) override;

    // Случайный ввод параметров
    void InRandom() override;

    // Вывод параметров в форматируемый поток
    void Out(FILE *file) override;

    double Quotient() override;

private:
    const char *name;
    const char *director;
    int year;
};


#endif//ACS_HW_2_DAYANA_FICTION_H
