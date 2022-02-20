/***********************
* date : 2022-02-21
* topic : greedy
* feedback : 
* time : 30min
************************/

#include<iostream>
#include<string>
using namespace std;

int main_11_03()
{
  string s;

  // 입력받기
  cin >> s;
  int n = s.length();

  // 연속된 구간 없애서 temp에 저장하기
  string temp = "";
  temp += s[0];

  for(int x=1;x<n;x++)
  {
    if(s[x-1] != s[x]) temp += s[x];
  }

  // 0과 1의 갯수 세기
  int zcnt = 0;
  int ocnt = 0;

  int t_len = temp.length();
  for(int x=0;x<t_len;x++)
  {
    if(temp[x] == '0') zcnt++;
    else ocnt++;
  }

  // 0과 1의 갯수 중 최소값이 최소 횟수
  if(zcnt < ocnt) cout << zcnt;
  else cout << ocnt;
  
  return 0;
}


