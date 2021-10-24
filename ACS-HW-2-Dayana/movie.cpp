#include "fiction.h"
#include "documentary.h"
#include "cartoon.h"
#include <cstdio>

//------------------------------------------------------------------------------
// Ввод параметров из файла
Movie *Movie::StaticIn(FILE *file) {
    Movie *sp = NULL;
    int kind = Utils::readInteger(file);
    switch (kind) {
        case 1:
            sp = new Fiction;
            sp->In(file);
            break;
        case 2:
            sp = new Cartoon;
            sp->In(file);
            break;
        default:
            sp = new Documentary;
            sp->In(file);
            break;
    }

    return sp;
}

Movie *Movie::StaticInRnd() {
    Movie *language = NULL;
    int kind = Utils::rndInteger(1, 3);
    if (kind == 1) {
        language = new Fiction;
        language->InRandom();
    } else if (kind == 2) {
        language = new Cartoon;
        language->InRandom();
    } else {
        language = new Documentary;
        language->InRandom();
    }
    return language;
}