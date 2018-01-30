#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strongPasswordChecker(char* s) {
    int changes = 0;
    int size = strlen(s);
    int lowerCase = 1;
    int upperCase = 1;
    int number = 1;
    int repetitions = 1;

    printf("Password is %d characters long. \n",size);

    if(size<6){
         changes += (6 - size);
    }

    if(size>20){
        changes += (size - 20);
    }
  
    for(int i = 0; i < size; i++){
        printf("Current character is %c \n", s[i]);
        if(isupper(s[i])){
            upperCase = 0;
        }
        else if(islower(s[i])) {
            lowerCase = 0;
        }
        else if(isdigit(s[i])){
            number = 0;
        }
        if(s[i] == s[i+1]){
            repetitions+=1;

            if(repetitions == 3){
                s[i+1] = "n";
                repetitions = 1;
                changes +=1;
            }
        }
    }

    printf("Needs upper: %d, Needs lower: %d, Needs number: %d \n",upperCase,lowerCase,number);
    
    changes += upperCase += lowerCase += number;
    
    printf("The password requires %d changes. \n",changes);
    return changes;

}


