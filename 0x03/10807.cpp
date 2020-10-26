#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; 
    int arr[100] = {}; 
    int v;
    int result=0;
    
    
    cin >> N;
    
    for(int i=0; i<N; i++) 
        cin >> arr[i];
    
    cin >> v;
    
    // for(int i=0; i<N; i++){
    //     if(v == arr[i]) result++;
    // }
    for(int i: arr) {
        if(i == v) result++;
    }
    cout << result;
    return 0;
}
