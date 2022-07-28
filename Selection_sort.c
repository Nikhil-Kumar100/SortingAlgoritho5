#include<stdio.h>
//Selection sort function
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
//print the array
void selectionsort(int arr[],int size){
    for(int i=0;i<size;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
}
//start print function
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
//start main function
int main(){
    int arr[]={5,4,6,8,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,size);
    printarray(arr,size);
    return 0;
}
