#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    vector<int> v1(3, 5); // {5,5,5};
    cout << v1.size() << '\n'; // 3
    v1.push_back(7); // {5,5,5,7};

    vector<int> v2(2); // {0,0};
    v2.insert(v2.begin() + 1, 3); // {0,3,0};

    vector<int> v3 = { 1,2,3,4 }; // {1,2,3,4}
    v3.erase(v3.begin() + 2); // {1,2,4};

    vector<int> v4; // {}
    v4 = v3; // {1,2,4}
    cout << v4[0] << v4[1] << v4[2] << '\n';
    v4.pop_back(); // {1,2}
    v4.clear(); // {}
}

/*
    배열의 성질
    1. O(1)에 k번째 원소를 확인/변경 가능
    2. 추가적으로 소모되는 메모리의 양(=overhead)가
       거의 없음
    3. Cache hit rate가 높음
    4. 메모리 상에 연속한 구간을 잡아야 해서
       할당에 제약이 걸림
    5. 임위 위치 원소 확인/변경, 끝 원소 추가/제거 = O(1)
    6. 임위의 위치에 원소를 추가/제거 = O(N)
*/