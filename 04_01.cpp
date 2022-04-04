/***********************
 * date : 2022-03-31
 * topic : 구현
 * feedback : 
 * time :  15 min
 ************************/

#include <iostream>
using namespace std;

int main()
{
  // 입력 받기
  int cnt;
  cin >> cnt;

  char path[cnt];
  for(int x=0;x<cnt;x++){
    cin >> path[x];
  }

  // 방향 설정
  char direct[4] = {'L', 'R', 'U', 'D'};
  int dx[4] = {0, 0, -1, 1};
  int dy[4] = {-1, 1, 0, 0};

  // 최초 좌표
  int xx = 1;
  int yy = 1;

  // 경로 이동
  for(int x=0;x<cnt;x++){
    for(int y=0;y<4;y++){
      if(path[x] == direct[y]){
        xx += dx[y];
        yy += dy[y];
      }
    }
  }

  // 좌표 출력
  cout << xx << " " << yy;
  
  return 0;
}