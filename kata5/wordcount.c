#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#include "hash.h"


void wordCount(char *phrase){
    Hash thing;
    hashInit(&thing,30);
    int *value;
    int valor;
    int j=0;
    char newarray[100];
   
    
    for(int i=0; phrase[i] != '\0'; i++){
        if(isalpha(phrase[i])){
            newarray[j] = tolower(phrase[i]);
            j++;
        }
        else {
            newarray[j]='\0';

            if(j>0){
                value = hashGet(&thing,newarray);
                if(value == NULL){
                    valor = 1;
                }
                else{
                    valor = *value+1;
                }

                hashInsert(&thing,newarray,valor);

            }
            j=0;
           
          
            // printf("%s", newarray); print each word
        }
    }

    //print the table
    for (i = 0; i < thing->size; i++)
    {
        if (thing->data[i].elements != NULL)
        {
            for (j = 0; j < thing->data[i].count; j++)
            {
                func(thing->data[i].elements[j].key, thing->data[i].elements[j].value);
            }
        }
    }

}


int main(){

    wordCount("Hello teacher hoOw aRe You?, Fine fine, and you? ");
    return 0;
}
