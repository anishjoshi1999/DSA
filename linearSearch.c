#include <stdio.h>
int linearSearch(int arr[],int size,int element){
    for(int i = 0; i < size;i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,22,33,44,11,587};
    int size,element,searchIndex;
    size = sizeof(arr) / sizeof(int);
    printf("Enter any element that you want to find:\n");
    scanf("%d",&element);
    searchIndex = linearSearch(arr,size,element);
    if(searchIndex != -1){
        printf("%d is at index %d\n",element,searchIndex);
    }
    else {
        printf("%d is not in the array\n",element);
    }
    return 0;
}