#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100] = { 0 };
    char substr[100] = { 0 };
    cin.getline(str, sizeof(str));
    cin.getline(substr, sizeof(substr));
    int count = 0;
    char* p = substr;
    char* q = str;
    int len = 0, len1 = 0;
    while (*p != '\0') {
        p++;
        len++;
    }
    while (*q != '\0') {
        q++;
        len1++;
    }
    // cout<<len1;
    // write your code here......
    int i = 0, j = 0;
    int k = 0;
    while (i < len1-len) {
        cout<<i<<" ";
        if (str[i] == substr[j]) {
            cout<<str[i];
            i++;
            j++;
            if (j == len - 1) {
                count++;
                j = 0;
            }
        }
        else i++;
    }
    cout << count << endl;
    return 0;
}