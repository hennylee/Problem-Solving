#include <iostream>
using namespace std;

int main0304() {
  int N, K;
  int cnt;
  
  cin >> N >> K;

  while(N != 1){
    if( N % K == 0) N /= K;
    else N -= 1;
    cnt++;
  }

  cout << cnt;
}  