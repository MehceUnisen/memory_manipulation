#include <stdio.h>
#include "memset.h"

int main() {

    char name[] = "MehceFarukUnisen";

    mem_set(name, 'k', 10, 7);

    printf("%s", name);

    return 0;
}