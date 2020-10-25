#include <iostream>
#include <vector>

using namespace std;
int func2(int arr[], int N);

int main() {
	int arr1[] = { 1, 52, 48 };
	int arr2[] = { 50, 42 };
	int arr3[] = { 4, 13, 63, 87 };
	int arr4[] = { 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60 };
	cout << func2(arr1, 3) << '\n';
	cout << func2(arr2, 2) << '\n';
	cout << func2(arr3, 4) << '\n';
	cout << func2(arr4, 20) << '\n';

	int arr[4] = { 4, 13, 63, 87 };
	int result[4] = {};
	int len = 4;

}

// O(N)으로 풀어라
int func2(int arr[], int N) {

	// 바킹독 풀이
	cout << '\n';
	int occur[101] = {};
	for (int i = 0;i < N;i++) {
		if (occur[100 - arr[i]])
			return 1;
		occur[arr[i]] = 1;
	}
	return 0;

	// 내 풀이 : 50 일 때를 세부적으로 에러처리함
	int result[101] = {};
	for (int i = 0; i < N; i++) {
		result[arr[i]]++;
	}
	for (int i = 0; i < 101; i++) {
		cout << result[i] << ' ';
	}
	for (int i = 0; i < 101; i++) {
		if (result[i] > 0) {
			if (result[100 - i] == 1) {
				if (i != 100 - i) {
					cout << i << '\n';
					cout << (100 - i) << '\n';
					return 1;
				}
			}
		}
	}
	cout << '\n';

	return 0;
}