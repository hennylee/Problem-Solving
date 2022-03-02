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
  vector<int> ball(n);
  vector<int> ballcnt(m+1);

  for(int x=0;x<n;x++)
  {
    cin >> ball[x];
    ballcnt[ball[x]]++;
  }

  for(int x=1;x<m+1;x++)
  {
    if(ballcnt[x] != 0)
    {    
      int c = ballcnt[x];
      int m = c * (c-1) / 2;
      cnt -= m;
    }
  }

  cout << cnt;
  
  return 0;
}
