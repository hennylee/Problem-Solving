#include <iostream>
using namespace std;

int N, K;
int cnt;

int main0304() {

  cin >> N >> K;

  while(N != 1){
    if( N % K == 0) N /= K;
    else N -= 1;
    cnt++;
  }

  cout << cnt;
}  