/***********************
 * date : 2022-04-05
 * topic : 구현
 * feedback : 
 *  1. 공간을 벗어나는 경우 고려 x 
 *  2. 갯수를 알 수 없는 char 배열 입력은 string으로 받기
 * time :  15 min
 ************************/

#include <iostream>
//#include <istream>
#include <string>
using namespace std;

int main_04_01()
{
  // 입력 받기
  int cnt;
  cin >> cnt;
  cin.ignore(); // 버퍼 비우기

  /*
  char path[100];
  cin.getline(path, 100);
  */
  string path;
  getline(cin, path);

  // 방향 설정
  char direct[4] = {'L', 'R', 'U', 'D'};
  int dx[4] = {0, 0, -1, 1};
  int dy[4] = {-1, 1, 0, 0};

  // 최초 좌표
  int xx = 1;
  int yy = 1;

  // 경로 이동
  for(int x=0;x<path.length();x++){
    for(int y=0;y<4;y++){
      if(path[x] == direct[y]){
        xx += dx[y];
        yy += dy[y];  
      }
    }
    // 공간을 벗어나는 경우
    if(xx < 1 || yy < 1 || xx > cnt || yy > cnt) continue;
  }

  // 좌표 출력
  cout << xx << " " << yy;
  
  return 0;
}