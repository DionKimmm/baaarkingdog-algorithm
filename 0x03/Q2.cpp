#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arr[4] = { 4, 13, 63, 87 };
    int result[4] = {};
    int len = 4;
    for (int i = 0; i < len; i++) {
        result[arr[i]]++;
        cout << result[i] << ' ';
    }
}