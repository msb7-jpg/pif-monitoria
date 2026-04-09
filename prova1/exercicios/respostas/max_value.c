#include <stdio.h>

int calculate_max(int arr[], int size){
    int max = arr[0];
    
    for (size_t i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){

    int array[100] = {1, 2, 3, 4, 5, 6, 100};
    int max = calculate_max(array, sizeof(array)/sizeof(int) -1);
    printf("%d", max);

    return 0;
}