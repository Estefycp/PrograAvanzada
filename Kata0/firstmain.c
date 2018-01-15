#include <stdio.h>
#include <stdlib.h>

int * two_sum (int * nums, int num_size, int target) {
    int i, j;
    int * result = (int *) calloc(2, sizeof(int));
    for (i = 0; i < num_size - 1; i++) {
        for (j = i + 1; j < num_size; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i; 
                result[1] = j;
                return result;
            }
        }
    }
    return NULL;
}

int main () {
    int nums[] = {1, 2, 3, 20, 24};
    int target = 22, num_size = 5;
    int *result = two_sum(nums, num_size, target);
    if(result != NULL && nums[result[0]] + nums[result[1]] == target) {
        printf("Si hay posiciones! \n");
        printf("Las posiciones son: ""[%d, %d] \n", result[0], result[1]);
    } else {
        printf("No hay numeros que den el target \n");
    }
    free(result);
    return 0;
}
