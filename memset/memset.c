#include "memset.h"

void mem_set(const void* src, int set_val, const unsigned int start_index, const unsigned int last_index) {
    
    if (start_index > start_index)
        return;
    
    for (int i = start_index; i < last_index; i++) {
        ((char*)src)[i] = set_val;
    }
}