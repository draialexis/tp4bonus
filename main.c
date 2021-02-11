#include <stdio.h>
#include "stringy.h"
#include <string.h>
#include <time.h>

int main() {
    //////////////////////////////////////////////////////////////////////////////
    /*strlen clone*/
    char sentenceA[] = "Hallo, World!";
    char sentenceB[] = "Hello, World!";
    float temps1;

    clock_t begin1 = clock();
    for (int i = 0; i < 10000000; ++i) {
        strlen_y(sentenceA);
    }
    clock_t end1 = clock();
    temps1 = (float) (end1 - begin1) / CLOCKS_PER_SEC;

    printf("strlen_y took %f seconds to iterate 10,000,000 times.\n", temps1);
    //////////////////////////////////////////////////////////////////////////////
    float temps2;

    clock_t begin2 = clock();
    for (int i = 0; i < 10000000; ++i) {
        strlen(sentenceA);
    }
    clock_t end2 = clock();
    temps2 = (float) (end2 - begin2) / CLOCKS_PER_SEC;

    printf("strlen took %f seconds to iterate 10,000,000 times.\n", temps2);
    //////////////////////////////////////////////////////////////////////////////
    /*strcmp clone*/
    float temps3;

    clock_t begin3 = clock();
    for (int i = 0; i < 10000000; ++i) {
        strcmp_y(sentenceA, sentenceB);
    }
    clock_t end3 = clock();
    temps3 = (float) (end3 - begin3) / CLOCKS_PER_SEC;

    printf("strcmp_y took %f seconds to iterate 10,000,000 times.\n", temps3);
    //////////////////////////////////////////////////////////////////////////////
    float temps4;
    clock_t begin4 = clock();
    for (int i = 0; i < 10000000; ++i) {
        strcmp(sentenceA, sentenceB);
    }
    clock_t end4 = clock();
    temps4 = (float) (end4 - begin4) / CLOCKS_PER_SEC;

    printf("strcmp took %f seconds to iterate 10,000,000 times.\n", temps4);

    //////////////////////////////////////////////////////////////////////////////
    /*strcpy clone*/
    char sentenceEmpty[] = "what";
    float temps5;

    clock_t begin5 = clock();
    for (int i = 0; i < 10000000; ++i) {
        strcpy_y(sentenceEmpty, sentenceB);
    }
    clock_t end5 = clock();
    temps5 = (float) (end5 - begin5) / CLOCKS_PER_SEC;

    printf("strcpy_y took %f seconds to iterate 10,000,000 times.\n", temps5);
    //////////////////////////////////////////////////////////////////////////////
    float temps6;

    clock_t begin6 = clock();
    for (int i = 0; i < 10000000; ++i) {
        strcpy(sentenceEmpty, sentenceB);
    }
    clock_t end6 = clock();
    temps6 = (float) (end6 - begin6) / CLOCKS_PER_SEC;

    printf("strcpy took %f seconds to iterate 10,000,000 times.\n", temps6);
    return 0;
}
