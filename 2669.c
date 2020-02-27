/*
    Problem 2669 - URI Online Judge
    Autor: Jose Carlos da Silva Filho
*/

//Includes 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
    char *dados;
    int *conjuntos;
}data;

int main(int argc, char const *argv[])
{
    char* p;
    int tam;
    
    if(p = (char *) malloc(sizeof(char)*100000))
        scanf("%s", p);
    else return 0;
    
    tam = strlen(p);
    int rep = floor(tam/2);

    free(p);
    return 0;
}
