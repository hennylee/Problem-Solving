#include <iostream>
using namespace std;

int main_03_04() {

  int N, K;
  int cnt = 0;

  cin >> N >> K;

  while(N != 1){
    if( N % K == 0) N /= K;
    else N -= 1;
    cnt++;
  }

  cout << cnt;
}  
