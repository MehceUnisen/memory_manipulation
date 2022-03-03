#include <stdio.h>
#include "memcmp.h"

int main() {
    char arr_one[] = "aa";
    char arr_two[] = "aa";
    
    if(mem_cmp(arr_one, arr_two, 2 * sizeof(char))) {
        printf("The arrays are identical for the given range!");
    }
    else {
        printf("Arrays are not the same");
    }
    
    return 0;
    
}
