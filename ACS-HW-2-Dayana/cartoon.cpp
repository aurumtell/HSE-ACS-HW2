#include "cartoon.h"

void Cartoon::In(FILE *file) {
    name = Utils::readStr(file);
    year = Utils::readInteger(file);
    char *kind = Utils::readStr(file);
    if (strcmp(kind, "draw") == 0) {
        type = 0;
    } else if (strcmp(kind, "puppet") == 0) {
        type = 1;
    } else if (strcmp(kind, "plasticine") == 0) {
        type = 2;
    } else {
        type = 1;
    }
    // allocates string
    free(kind);
}

void Cartoon::InRandom() {
    name = Utils::randomStr(Utils::rndInteger(5, 10));
    year = Utils::rndInteger(1950, 2021);
    type = Utils::rndInteger(0, 2);
}

void Cartoon::Out(FILE *file) {
    char *kind;
    switch (type) {
        case 0:
            kind = (char *) "DRAW";
            break;
        case 1:
            kind = (char *) "PUPPET";
            break;
        case 2:
            kind = (char *) "PLASTICINE";
            break;
    }
    fprintf(file, "Cartoon: name = %s, year = %d, kind = %s, Quotient = %f\n", name, year, kind, Quotient());
}

double Cartoon::Quotient() {
    return static_cast<double>(year) / static_cast<double>(strlen(name));
}
