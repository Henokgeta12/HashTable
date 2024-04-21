#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "HashTable.h"

int main()
{

    hashtable *table = createtable(10);
    insert(table,"henok","asfaw");
    insert(table,"asfaw","getachew");
}