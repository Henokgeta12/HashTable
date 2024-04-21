#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "HashTable.h"

/*
* this is the function in hashtable used for insert
*/
void insert(hashtable *table,char *ky,char *val)
{
    unsigned long ind = hash(ky);
    unsigned long index = (ind % table->size); 
    kvp *tmp = malloc(sizeof(kvp));
    tmp->key = ky;
    tmp->value = val;
    if(table->buket[index] == NULL)
    {
     table->buket[index] = tmp;   
    }
    else
    {
        kvp *tmp_2 = table->buket[index];
        while(tmp_2->next != NULL)
        {
            if(strcmp(tmp->key,ky) == 0)
            {
                tmp_2->value = val;
                free(tmp_2);
                return;
            }
            tmp_2 = tmp_2->next;
        }
    }
}


