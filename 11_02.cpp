



/***********************
* date : 2022-02-18
* topic : greedy
* feedback : 
*   1. 1일때와 0일때를  1이하일때로 바꾸면 조건이 간결해짐
* time : 15min
************************/

#include<iostream>
#include<string>
using namespace std;

int main_11_02()
{
  string nums;
  cin >> nums;

  int n_len = nums.length();

  int result = nums[0] - 48; // char이기 때문에 atoi못쓰고 48빼서 숫자로 만듬
  
  for(int x=1;x<n_len;x++)
  {
    
    int now = nums[x] - 48; // char이기 때문에 atoi못쓰고 48빼서 숫자로 만듬
    cout << "result : " << result << endl;
    cout << "nums[x] : " << now << endl;

    // 0이나 1을 만났을때만 더하기
    /*if(now == 1 || now == 0 || result == 1 || result == 0)*/
    if(now < 2 || result < 2)
    {
      result += now;      
    }
    // 나머지 경우는 곱하기
    else
    {
      result *= now;
    } 

    cout << "result : " << result << endl;
    cout << "===============" << endl;

  }

  cout << result << endl;
  
  return 0;
}