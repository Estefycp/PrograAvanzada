#include <stdio.h>
#include <string.h>

int doFullName(char *firstName, char *lastName, char **fullName){
    int sizefn = strlen(firstName);
    int sizeln = strlen(lastName);
    *fullName = malloc(sizefn + sizeln + 1) * sizeof(char));
    strcpy(*fullName, firstName);
    strcpy(*fullName + sizefn, " ");
    strcpy(*fullName + sizefn + 1, lastName);

    return 0;
}

int main(){
    char firstName[] = "Estefy";
    char *lastName = "Calderon";
    char *fullName;

    doFullName(firstName,lastName,&fullName);

    printf("fullName = %s \n", fullName);
    free(fullName);
    return 0;
}