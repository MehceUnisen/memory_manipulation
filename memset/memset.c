#include "memset.h"

void mem_set(const void* src, int set_val, const unsigned int start_index, const unsigned int last_index) {
    
    for (int i = start_index; i < last_index; i++) {
        ((char*)src)[i] = set_val;
    }
}