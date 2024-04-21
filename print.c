#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "HashTable.h"


void print(hashtable *table)
 {
     int x;
     for (x = 0; x < table->size; x++)
     {
        kvp *tmp = table->bucket[x];
        if(tmp)
        {
            while (tmp != NULL)
            {
                if(tmp->next)
                {
                printf("Bucket %d %s : %s, -> ",x, tmp->key, tmp->value);
                }
                else
                {
                printf("Bucket %d %s : %s ",x, tmp->key, tmp->value);  
                }
             tmp = tmp->next;
            }
            putchar('\n');
        }
        else
        {
            printf("Bucket %d Empty Table \n", x);
        }   
     }
 }
