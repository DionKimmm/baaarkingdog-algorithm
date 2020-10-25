#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int arr[26] = {};
    string S = "baekjoon";
    char c = 'a'; // 97
    cout << int(c) << '\n';
    c = 'z'; // 122
    cout << int(c) << '\n';

    for (int i = 0; i < size(S); i++) {
        arr[S[i] - 97] += 1;
        for (int j = 0; j < 26; j++) {
            cout << arr[j] << ' ';
        }
        cout << '\n';
    }
}