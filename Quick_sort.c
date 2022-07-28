#include<stdio.h>
//Quick sort function
void quicksort(int arr[],int l,int r){
    if(l<r){
        int pivot=arr[l];
        int i=l+1;
        int j=r;
        while(i<=j){
            while(i<=r && arr[i]<=pivot){
                i++;
            }
            while(j>=l && arr[j]>pivot){
                j--;
            }
            if(i<j){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        arr[l]=arr[j];
        arr[j]=pivot;
        quicksort(arr,l,j-1);
        quicksort(arr,j+1,r);
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
    quicksort(arr,0,size-1);
    printarray(arr,size);
    return 0;
}
