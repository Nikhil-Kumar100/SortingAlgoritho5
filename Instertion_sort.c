#include<stdio.h>
//Instertion sort function
void insertionsort(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
}
//print the array
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
//start main function
int main(){
    int arr[]={5,4,6,8,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,size);
    printarray(arr,size);
    return 0;
}
