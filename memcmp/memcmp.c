#include "memcmp.h"


bool mem_cmp(const void* mem_block_one, const void* mem_block_two, size_t n) {
    for (int i = 0; i < n; i++) {
        //we first cast it to char ptr
        //another thing can be done is castin it to intptr_t
        if (((char*)mem_block_one)[i] != ((char*)mem_block_two)[i]) {
            return false;
        }
    }    
    return true;

    
}