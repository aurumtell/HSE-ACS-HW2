//
// Created by Dayana on 19.10.2021.
//

#ifndef __cartoon__
#define __cartoon__

#include "movie.h"
#include <cstdio>

class Cartoon : public Movie {
private:
    const char *name;
    int year;
    int type;

public:
    enum {
        DRAW,
        PUPPET,
        PLASTICINE
    };

    ~Cartoon() override = default;

    // Ввод параметров из файла
    void In(FILE *file) override;

    // Случайный ввод параметров
    void InRandom() override;

    // Вывод параметров в форматируемый поток
    void Out(FILE *file) override;

    double Quotient() override;
};


#endif//__cartoon__
