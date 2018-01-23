#include <assert.h>
#include "operations.h"
#define MAX_INT 2147483647

void printTestMessage(int condition, char *messagePassed,char messageFailed);

int add(int a,int b){

    long c=(long) a+b;
    assert(c<=MAX_INT && c> -MAX_INT);

    /*
    if(c>= 2147483647 && <= -2147483646){
        //fail
    }

    else

    {
        return (int)c;
    }*/
    return a+b;
}


int substraction(int x,int y){

    long d=(long) x-y;
    assert(d<=MAX_INT && d> -MAX_INT);

    return (int) d;
}
