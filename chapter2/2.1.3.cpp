#include<iostream>
using namespace std;
# define Max 50
struct Sqlist
{
    int arr[Max]={1,4,5,3,2,8,2,7};
    int len=8;
};
// 删除线性表
void deletelist(Sqlist &s,int x){
    int k=0;
    for(int i=0;i<s.len;i++){
        if(s.arr[i]==x) k++;
        else s.arr[i-k]=s.arr[i];//后面的值往前移动
        // 发现一个往前移动一位
    }
    s.len=s.len-k;
}
int main(){
    Sqlist L;
    for(int i=0;i<L.len;i++) cout<<L.arr[i]<<" ";
    cout<<endl;
    deletelist(L,2);
    for(int i=0;i<L.len;i++) cout<<L.arr[i]<<" ";
    cout<<endl;
    return 0;
}