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
    int index = (ind % table->size); 
    kvp *tmp = malloc(sizeof(kvp));
    
    tmp->key = strdup(ky);
    tmp->value = strdup(val);
    tmp->next = NULL;
    
    if(table->bucket[index] == NULL)
    {
      table->bucket[index] = tmp; 
    }
    else
    {
        
        kvp *tmp_2 = table->bucket[index];
        while (tmp_2 != NULL)
        {
            if (strcmp(tmp_2->key, ky) == 0)
            {
                tmp_2->value = strdup(val);
                free(tmp->key);
                free(tmp);
                return;
            }
            tmp_2 = tmp_2->next;
        }
        tmp->next = table->bucket[index];
        table->bucket[index] = tmp;
    }
}


