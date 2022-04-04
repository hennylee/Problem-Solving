/***********************
 * date : 2022-03-02
 * topic : greedy
 * feedback :
 * time : 30 min
 ************************/

#include<iostream>
#include<vector>
using namespace std;

int main_11_05()
{
  int n; // 볼링공의 갯수
  int m; // 공의 최대 무게

  cin >> n >> m;
  
  int cnt = n * (n-1) / 2;
  vector<int> ball(n); // 입력받은 공의 무게
  vector<int> ballcnt(m+1); // 무게 당 공의 갯수 저장

  for(int x=0;x<n;x++)
  {
    cin >> ball[x]; // 공무게 입력받기
    ballcnt[ball[x]]++; // 해당 무게의 배열 값 1 증가시키기
  }

  for(int x=1;x<m+1;x++)
  {
    if(ballcnt[x] > 1) // 같은 무게의 공이 2개 이상이면?
    {
      // 같은 무게끼리의 경우의 수 빼기 
      int c = ballcnt[x];
      int m = c * (c-1) / 2; 
      cnt -= m;
    }
  }

  cout << cnt;
  
  return 0;
}
