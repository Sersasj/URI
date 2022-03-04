#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <algorithm> 
#include <stdio.h>
using namespace std;

int mdc(int num1, int num2)
{
  if(num1%num2 == 0)
    return num2;
  else
    return mdc(num2, num1%num2);
}

int main()
{
  float r;
  int x,y;
  scanf("%d.%d",&x,&y);
  x = x * 100;
  x = x + y;
  float mdc_var = mdc(x,36000);

 
  cout << 36000/mdc_var << endl;  

  return 0;
}
