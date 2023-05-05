#include<bits/stdc++.h>
using namespace std;
#define Max 50
struct Sqlist 
{
    int arr[Max]={};
    int len=0;
};
void ListDelete(Sqlist &s,int &ele){
    if(s.len==0){
        cout<<"error";
    }
    int min=s.arr[0];
    int index=0;
    for(int i=1;i<s.len;i++){
        if(s.arr[i]<min){
            min=s.arr[i];
            index=i;
        }
    }
    ele=min;
    s.arr[index]=s.arr[s.len-1];
}
int main(){
    Sqlist s;
    s.len=4;
    int a[]={3,2,1,4};
    for(int i=0;i<s.len;i++)
    s.arr[i]=a[i];
    int k=0;
    ListDelete(s,k);
    for(int i=0;i<s.len;i++)
    cout<<s.arr[i];
    cout<<endl;
    cout<<k;
    cout<<endl;
    return 0;
}
