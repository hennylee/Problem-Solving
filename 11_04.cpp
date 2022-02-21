/***********************
 * date : 2022-02-21
 * topic : greedy
 * feedback :
 * time : 90 min
 ************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> coins; // 입력받은 동전
vector<int> used; // 사용한 동전 표시
vector<int> total; // (1~ 총합) DAT

void getsum(int level, int sum)
{
  if(level == n)
  {
    return;
  }
  
  for(int x=0;x<n;x++)
  {
    if(used[x] == 1) continue; // 사용한 동전이면 pass
    if(total[sum + coins[x]] == 1) continue; // 이미 구해진 합이면 pass
    total[sum + coins[x]] = 1; // 동전합 표시
    used[x] = 1; // 사용여부 표시
    getsum(level + 1, sum + coins[x]); // 동전합 구하기
    used[x] = 0; // 사용여부 초기화
  }
}


int main() 
{ 
  int sum = 0; // 전체 동전의 합
  
  // 입력받기
  cin >> n;
  for(int x=0;x<n;x++)
  {
    int coin;
    cin >> coin;
    coins.push_back(coin); // 동전 벡터에 추가
    used.push_back(0); // 사용여부 0으로 초기화
    sum += coin; // 동전합 구하기
  }  
  
  total.assign(sum + 1, 0); // 동전의 합만큼 0으로 채운 vector 생성
  
  getsum(0, 0); // 재귀함수 호출

  // 최소로 안나온 동전합 출력
  for(int x=1;x<sum + 1;x++)
  {
    if(total[x] == 0) {
      cout << x;
      break;
    }
  }
  
  return 0; 
}