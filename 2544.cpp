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
  int entrada;
  while(cin >> entrada){
    cout << log2(entrada) <<endl;
  }


  return 0;
}
