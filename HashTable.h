#ifndef HashTable
#define HashTable

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/*
* this is structure that contain key value pair
*/
typedef struct kvp
{
    char *key;
    char *value;
    struct kvp *next;
}kvp;

/*
* main hashtable with double pointer
*/
typedef struct hashtable
{
    int size;
    kvp **buket;
}hashtable;
/*
* this is the function in hashtable used for insert
*/
void insert(hashtable *table,char *ky,char *value);
/*
* this is the function in hashtable used to create Table
*/
hashtable *createtable(int n);
/*
* dbj2 hash function
*/
unsigned long hash(const char* key);

#endif /* HEADER_FILE_NAME_H */