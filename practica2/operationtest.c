#include <stdio.h>
#include "operations.h"

void printTestMessage(int ,char *, char *);
int testAddition(void);
int testSubstraction(void);

int main(){

    printTestMessage(testAddition(),"add test passed","add test failed");

    printTestMessage(testSubstraction(),"sub test passed","sub test failed");

    return 0;
}

void printTestMessage (int condition,char *messagePassed,char *messageFailed){

    if(condition){
        print("%s\n",messagePassed);
    }

    else{
        printf("%s\n",messageFailed);
    }
}

int testAddition(void){
    int a=5;
    int b=7;

    int result = add(a,b);
    int expected = a+b;
    return result == expected;
}


int testSubstraction(void){
    int c=10;
    int d=7;

    int result2 = substraction(c,d);
    int expected2 = c-d;
    return result2 == expected2;

}
