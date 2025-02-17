#include<stdio.h>

int main(){
    int arr[10] = {8,5,3,9,2,6,4,1,10,7};
    int max = 0;
    int min = 0;
    int length = sizeof(arr)/sizeof(int);
    for(int i = 1; i<length; i++){
        if(arr[min] > arr[i]){
            min = i;
        }
        if(arr[i] > arr[max]){
            max = i;
        }
    }
    printf("Min : %d, Max : %d", arr[min], arr[max]);
    return 0;
}