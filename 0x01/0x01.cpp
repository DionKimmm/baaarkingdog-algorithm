﻿// 0x01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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

#include <iostream>
using namespace std;

int func1(int N);
int func2(int arr[], int N);

int main()
{
    // cout << "Hello World!\n";
    // cout << func1(16) << "\n";
    // cout << func1(34567) << "\n";
    // cout << func1(27639) << "\n";
    int arr1[] = { 1, 52, 48 };
    cout << func2(arr1, 3);
    
    
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


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
