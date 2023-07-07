#include<stdio.h>
void main(){
int arr[]={3,8,5,9,4};
int n=5;
Quicksort(arr,0,n-1);
//print sorted array
for (int i = 0; i < n; i++)
{
    /* code */
    printf("%d \n",arr[i]);
}

}
void Quicksort(int arr[],int low,int high){
    if(low<high){
        int pid=partition(arr,low,high);
        Quicksort(arr,low,pid-1);
        Quicksort(arr,pid+1,high);
    }
}
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for (int j = low; j < high; j++)
    {
        if(arr[j]<pivot){
            i++;
            // swap
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    //to swap pivot element into its appropiate place
    i++;
    int temp=arr[i];
    arr[i]=pivot;
    arr[high]=temp;
    return i;
}