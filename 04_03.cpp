/***********************
 * date : 2022-04-27
 * topic : 구현
 * feedback : 
 *  1. string으로 입력된 숫자를 int로 변환하려면?
 *    => '0'을 뺴면 됨
 * time :  30 min
 ************************/

#include<iostream>
#include<vector>
using namespace std;

int main_04_03()
{
  string point;
  cin >> point;  
  
  int xx = point[0] - 'a' + 1;
  int yy = point[1] - '0';

  // 수평으로 두칸 + 수직으로 한칸
  // 수직으로 두칸 + 수평으로 한칸
  int xarr[8] = {2, 2, -2, -2, 1, 1, -1, -1};
  int yarr[8] = {1, -1, 1, -1, -2, 2, -2, 2};
  int cnt = 0;

  for(int i=0;i<8;i++){
    int dx = xx + xarr[i];
    int dy = yy + yarr[i];

    if(dx<1||dy<1||dx>8||dy>8) continue;
    else 
      cnt++;
  }
  cout << cnt;
  return 0;
}
