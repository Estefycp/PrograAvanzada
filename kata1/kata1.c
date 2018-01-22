#include <stdio.h>
#include <stdlib.h>


int* anagramMappings(int* A, int ASize, int* B, int BSize, int* returnSize) {

     int * result =(int*) malloc(sizeof(int)*ASize);
        for(int i=0;i<ASize;i++){
            for(int j=0;j<BSize;j++){
                if(A[i] == B[j]){
                    result[i]=j;     
                }
            }
        }
        *returnSize = ASize; 
        return result;
    
}


int main(){

    int A[] = {3, 1, 20};
    int B[] = {20, 3, 1};
    int x;
    int *result = anagramMappings(A,3,B,3,&x);

    for(int i=0;i<3;i++){
        printf("%d \n",result[i]);
    }
    free(result);

}



