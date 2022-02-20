/***********************
* date : 2022-02-14
* topic : greedy
* feedback : 
*  1. 51111 인 경우 테스트 케이스 통과 못함
*  2. size는 어차피 n으로 입력 받으니까 구할 필요 없음
*  3. 문제 이해 잘못한 듯 다시 풀어보기
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