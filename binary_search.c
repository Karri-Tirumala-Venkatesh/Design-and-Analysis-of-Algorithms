#include<stdio.h>

int binary_search(int low, int high, int arr[], int key){
    if(low==high){
        if(arr[low] == key){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        int mid = (low+high)/2;
        if(arr[mid]<key){
            return binary_search(mid+1, high, arr, key);
        }
        else if(arr[mid] >key){
            return binary_search(low, mid-1, arr, key);
        }
        else{
            return 1;
        }
    }
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int result = binary_search(0,10,arr,7);
    if(result==1){
        printf("Found");
    }
    else{
        printf("Not Found");
    }
}