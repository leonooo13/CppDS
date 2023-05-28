#include<iostream>
using namespace std;
#define Max 20
bool isSymmetric(int matrix[][Max], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }
    return true;
}
int main(){
    bool flag=0;
}
