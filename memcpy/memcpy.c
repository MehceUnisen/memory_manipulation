#include "memcpy.h"


void mem_cpy(const void* cpy_adr, const void* dest_adr, size_t size) {
    // dest_adr = malloc(size);

    for (int i = 0; i < size; i++) {
        ((char*)dest_adr)[i] = ((char*)cpy_adr)[i];
    }
}
