/***********************
 * date : 2022-03-14
 * topic : greedy
 * feedback : 
 *   무조건 문제의 조건을 순차적으로 코딩할 필요는 없다!
 * time :  min
 ************************/

#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;

int solution(vector<int> food_times, long long k) {
  int answer = 0;

  //queue<int, int> que;

  int idx = 0;

  
  for(int num : food_times){    
    //que.push(idx++, num);
  }
  return answer;
}


int main_11_06()
{
  vector<int> food_times = {3, 1, 2};
  long long k = 5;
  int answer = solution(food_times, k);
  cout << "answer : " << answer;
  
  return 0;
}