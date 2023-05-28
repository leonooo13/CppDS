#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;  // 从键盘读入一个正整数

    int* arr = new int[n];  // 动态分配大小为 n 的数组
    for (int i = 0; i < n; i++) {
        arr[i] = n + i;     // 对每个元素赋值为 n+i
    }

    // 使用指针变量遍历数组并输出其中的元素
    int* p = arr;   // 将指针 p 指向数组第一个元素
    while (p != nullptr) {
        cout << *p << " ";   // 输出当前指针所指向的元素值
        p++;                 // 将指针向后移动一个 int 类型长度的距离
    }
    cout << endl;

    delete[] arr;   // 释放动态分配的内存空间
    return 0;
}
