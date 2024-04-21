#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "HashTable.h"

hashtable *createtable(int n)
{
    hashtable *table = malloc(sizeof(hashtable));
    table->size = n;
    memset(table,0,sizeof(hashtable));
    return table;
}