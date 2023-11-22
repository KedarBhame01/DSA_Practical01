/**
 * The code defines a function to insert a value at a specific index in an array and then prints the
 * array before and after the insertion.
 * 
 * @return The function `indexinsert` returns 1 if the value was successfully inserted at the given
 * index, and -1 if the capacity of the array is not sufficient to insert the value.
 */
#include<stdio.h>
void printarr(int arr[], int n);
int indexinsert(int arr[],int capacity,int size,int index, int value);
int main(){
    // printf("Hello Kedar.");
    int arr[100]={1,2,3,4,5,6};
    int size= 6, capacity= 100, index= 6 , value=7;
    printarr(arr,size);
    indexinsert(arr,capacity,size,index,value);
    size++;
    printarr(arr,size);

    return 0;
}
void printarr(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d  " ,arr[i]);
    }
    printf("\n");
}
int indexinsert(int arr[],int capacity,int size,int index, int value){
    if(capacity <= size -1){
        return -1;
    }
    for(int i = size-1;i >= index; i--){
        arr[i+1] = arr[i];
    }
    arr[index]=value;
    return 1;
}
