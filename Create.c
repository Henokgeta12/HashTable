#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "HashTable.h"

hashtable *createtable(int n)
{
    hashtable *table = malloc(sizeof(hashtable));
    table->size = n;
    table->bucket = calloc(table->size, sizeof(kvp*));
    
    return table;
}