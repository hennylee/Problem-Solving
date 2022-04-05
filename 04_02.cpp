/***********************
 * date : 2022-04-06
 * topic : 구현
 * feedback : 
 *  1. 시간 변수명 : 시 h, 분 m, 초 s
 * time :  15 min
 ************************/

#include<iostream>
using namespace std;
int main()
{
  // 시간 입력 받기
  int hour;
  cin >> hour;

  // 3이 들어간 시간 구하기
  int time_cnt = 0;
  for(int x=0;x<=hour;x++){
    for(int y=0;y<60;y++){
      for(int z=0;z<60;z++){
        if(x%10 == 3 || y%10 == 3 || y/10 == 3 || z%10 == 3 || z/10 == 3) time_cnt++;
      }
    }    
  }

  cout << time_cnt;
  
  return 0;
}