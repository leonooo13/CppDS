#include<iostream>
using namespace std;
# define Max 50
struct Sqlist
{
    int arr[Max]={1,4,5,3,2,8,2,7};
    int len=8;
};
// 逆置线性表
void swap(int &a,int &b){
    int tmp=a;
    a=b;
    b=tmp;
}
void reverse(Sqlist &s){
    for(int i=0;i<s.len/2;i++){
        swap(s.arr[i],s.arr[s.len-i-1]);
    }
}
int main(){
    Sqlist L;
    for(int i=0;i<L.len;i++){
        cout<<L.arr[i];
    }    
    reverse(L);
    cout<<endl;
    for(int i=0;i<L.len;i++){
        cout<<L.arr[i];
    }
    return 0;
}
