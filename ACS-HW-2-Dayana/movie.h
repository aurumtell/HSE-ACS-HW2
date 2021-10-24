//
// Created by Dayana on 19.10.2021.
//

#ifndef __movie__
#define __movie__

#include <cstdio>
#include "movie.h"
#include "utils.h"

//------------------------------------------------------------------------------
// структура, обобщающая все имеющиеся фильмы
class Movie {
public:
    virtual ~Movie() = default;

    // Ввод обобщенного фильма
    static Movie *StaticIn(FILE *file);

    // Ввод обобщенного фильма
    virtual void In(FILE *file) = 0;

    // Случайный ввод обобщенного фильма
    static Movie *StaticInRnd();

    // Виртуальный метод ввода случайного фильма
    virtual void InRandom() = 0;

    // Вывод обобщенной фильма
    virtual void Out(FILE *file) = 0;

    // Вычисление обобщенного фильма
    virtual double Quotient() = 0;
};

#endif//__movie__
