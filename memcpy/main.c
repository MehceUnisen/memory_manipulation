#include <stdio.h>
#include "memcpy.h"

int main() {

    int a[] = {1, 2};
    int b[2];

    mem_cpy(a, b, 2 * sizeof(int));


    printf("%d", b[1]);

    return 0;
}