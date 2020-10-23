// 0x01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// N의 크기와       그 N에 따른 허용 시간 복잡도
// N <= 11          O(N!)
// N <= 25          O(2^N)
// N <= 100         O(N^4)
// N <= 500         O(N^3)
// N <= 3K          O(N^2lgN)
// N <= 5K          O(N^2)
// N <= 1M          O(NlgN)
// N <= 10M         O(N)
// 그 이상          O(lgN), O(1)

//공간 복잡도는 512MB = 1.2억개의 int를 선언할 수 있다는 것을 기억해라.

#include <iostream>
#include <math.h>
using namespace std;

int func1(int N);
int func2(int arr[], int N);
int func3(int N);
int func4(int N);

int main()
{
    // cout << "Hello World!\n";
    // cout << func1(16) << "\n";
    // cout << func1(34567) << "\n";
    // cout << func1(27639) << "\n";

    /*int arr1[] = { 1, 52, 48 };
    int arr2[] = { 50, 42 };
    int arr3[] = { 4, 13, 63, 87 };
    cout << func2(arr1, 3);
    cout << func2(arr2, 2);
    cout << func2(arr3, 4);*/

    /*cout << func3(9);
    cout << func3(693953651);
    cout << func3(756580036);*/
    
    /*int result = 0;
    for (int i = 0; pow(2,i) <= 1000000000; i++) {
        result = pow(2, i);
        cout << result << "\n";
    }*/
    
    cout << func4(5) << "\n";
    cout << func4(97615282) << "\n";
    cout << func4(1024) << "\n";
    cout << "\n";
    
}

// 문제 1
// N 이하의 자연수 중에서 3의 배수이거나 5의 배수인 수를 모두 합한 값을 
// 반환하는 함수 func1(int N)을 작성하라. N은 10만 이하의 자연수이다.

int func1(int N) {
    int result = 0;

    while (N > 0) {
        // cout << N << "\n";
        if (N % 3 == 0 || N % 5 == 0) {
            result += N;
        }
        N--;
    }
    // cout << "\n";
    return result;
}

// 문제 2
// 주어진 길이 N의 배열 arr에서 합이 100인 서로 다른 위치의 두 원소가 존재하면
// 1을, 존재하지 않으면 0을 반환하는 함수 func2(int arr[], int N)을 작성하라.
// arr의 각 수는 0 이상 100 이하이고 N은 1000 이하이다.
int func2(int arr[], int N) {

    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] + arr[j] == 100) return 1;
        }
    }

    return 0;
}

// 문제 3
// N이 제곱수이면 1을 반환하고 제곱수가 아니면 0을 반환하는 함수 func3(int 
// N)을 작성하라. N은 10억 이하의 자연수이다.
int func3(int N) {
    
    /*for (int i = 1; i <= N/2; i++) {*/
    for (int i = 1; i*i <= N; i++) {
        if (pow(i, 2) == N) return 1;
    }
    return 0;
}

// 문제 4
// N이하의 수 중에서 가장 큰 2의 거듭제곱수를 반환하는 함수 func4(int N)을
// 작성하라. N은 10억 이하의 자연수이다.
int func4(int N) {
    int arr[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 
        16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 
        8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912 };
    int result = 0;

    for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        if (arr[i] <= N) {
            result = arr[i];
        }
    }

    return result;
}

// O(lgN)
int func4_1(int N) {
    int val = 1;
    while (2 * val <= N) val *= 2;
    return val;
}


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 자주사용하는 VS 단축키 모음
// https://jhnyang.tistory.com/323