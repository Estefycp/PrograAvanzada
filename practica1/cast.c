#include <stdio.h>

//char 1 byte
//int 4 byte
//float 4 byte
//double 8 byte

// el nombre de un arreglo es = &arreglo[0]

// *(arreglo+1) = 20  ==  arreglo[1] = 20

int main(){
    int a=4;
    int *p;
    int j;
    float f = 7.5;
    int max = 2147483647;
    long int d;
    int b = a + (int)f; //
    float c = a*f;
    int arreglo[5] = {0};
    d = (long)max*max;

    p = &a;
    *p = 7;
    *p = 8;

    p = arreglo;

    for(int k = 0; k<sizeof(arreglo) / sizeof(arreglo[0]); k++){
        *p++ = 67; // == *p = 67
                   // p++;
    }

    printf("p =%p,  j=%d, a=%d, b=%d , d=%ld \n",p,j,a,b,d);
    printf(" f= %f, c= %f \n",f,c);
    return 0;

}
