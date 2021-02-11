//
// Created by draia on 11/02/2021.
//

#ifndef TP4BONUS_STRINGY_H
#define TP4BONUS_STRINGY_H

unsigned long long strlen_y(const char str[]) {
    long long i = 0;
    while (str[i] != '\0') {
        ++i;
    }
    return i;
}

#endif //TP4BONUS_STRINGY_H
