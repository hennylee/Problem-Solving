#include <iostream>
using namespace std;

int main() {
  
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