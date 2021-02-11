#include <stdio.h>
#include "stringy.h"
#include <string.h>
#include <time.h>

int main() {
    char sentence[] = "Hello, World!";
    float temps1;

    clock_t begin1 = clock();
    for (int i = 0; i < 10000000; ++i) {
        strlen_y(sentence);
    }
    clock_t end1 = clock();
    temps1 = (float) (end1 - begin1) / CLOCKS_PER_SEC;

    printf("strlen_y took %f seconds to iterate 10,000,000 times.\n", temps1);
////////////////////////////////////////////////////////////////////

    float temps2;

    clock_t begin2 = clock();
    for (int i = 0; i < 10000000; ++i) {
        strlen(sentence);
    }
    clock_t end2 = clock();
    temps2 = (float) (end2 - begin2) / CLOCKS_PER_SEC;

    printf("strlen took %f seconds to iterate 10,000,000 times.\n", temps2);

    return 0;
}
