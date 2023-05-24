#ifndef HASHMAP_H
#define HASHMAP_H

#include <stdio.h>

/*
 * This implementation roughly follows the one in this CACM paper
 * https://pdfs.semanticscholar.org/ff4d/1c5deca6269cc316bfd952172284dbf610ee.pdf
 * (also see Litwin linear hashing algorithm)
*/

typedef struct Hashmap Hashmap;

struct Hashmap
{
    Bucket* Buckets;
    // - Number of Buckets in hashmap
    size_t size;
};

// - Create new hashmap object
Hashmap* hashmap_new();

// - Hash function
void hashmap_hash();

// - Expand table by 1 Bucket
void hashmap_expand();

// - Shrink table by 1 Bucket
void hashmap_shrink();

#endif // HASHMAP_H