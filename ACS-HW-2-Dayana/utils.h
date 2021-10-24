//
// Created by Dayana on 19.10.2021.
//

#ifndef __utils__
#define __utils__

#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime> // для функции time()

class Utils {
public:
    // Генерация случайного числа в заданном диапазоне
    static int rndInteger(int first, int last) {
        return rand() % (last - first + 1) + first;
    }

    static char *readStr(FILE *file) {
        char array[128] = {0};
        fscanf(file, "%s", array);
        char *result = (char *) malloc(strlen(array));
        strcpy(result, array);

        return result;
    }

    static int readInteger(FILE *file) {
        int result = 0;
        fscanf(file, "%d", &result);
        return result;
    }

    static char *randomStr(int len) {
        static const char kAlphabet[] =
                "0123456789"
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                "abcdefghijklmnopqrstuvwxyz";
        char *array = new char[len + 1];
        for (int i = 0; i < len; ++i) {
            array[i] = kAlphabet[rand() % (sizeof(kAlphabet) - 1)];
        }
        array[len] = 0;
        return array;
    }
};
#endif//__utils__
