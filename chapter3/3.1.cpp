#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void insertSort(int arr[],int n){
    // 数组第一个默认是有序的，取出后面的元素依次插入，
    // 
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while ((j>=0)&&(key<arr[j]))
        {
            arr[j+1]=arr[j];
            j--;
        }
        cout<<j<<endl;
        arr[j+1]=key;
    }
}
int main(){
    int arr[5]={3,1,4,3,2};
    int n=5;
    // bubbleSort(arr,n);
    insertSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}