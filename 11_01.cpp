/***********************
* date : 2022-02-14
* topic : greedy
* feedback : 
* time : 30 min
************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main_11_01() {
  int n;
  cin >> n;

  // 입력받기
  vector<int> vect(n);
  for(int x=0;x<n;x++){
    cin >> vect[x];
  }

  // 공포도 내림차순 정렬하기
  sort(vect.begin(), vect.end(), greater<int>());

  // 그룹짓기
  int group_cnt = 0;
  int boss_idx = 0;
  int v_size = vect.size();
  
  while(boss_idx < v_size){
    int group_size = vect[boss_idx];
    boss_idx += group_size;
    group_cnt++;
  }
  cout << group_cnt;
}  