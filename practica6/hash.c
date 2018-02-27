#include <stdlib.h>
#include <stdio.h>
#include "hash.h"

void initHash(Hash *myHash, unsigned size, unsigned (* hash) (void *, unsigned)){

    myHash->size = size;
    myHash->hash = hash;
    myHash->data = (Vector *)calloc(size, sizeof(Vector));
    return;
};

void insertHash(Hash *myHash,void *,void*){
    return;
}
