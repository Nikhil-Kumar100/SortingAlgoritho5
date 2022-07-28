#include<stdio.h>
void bubblesort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
//print the array
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
//start main function
int main(){
    int arr[]={5,4,6,8,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,size);
    print(arr,size);
    return 0;
}
