#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <algorithm> 
#include <stdio.h>
using namespace std;


int main()
{
  int qnt,entrada;
  cin >> qnt;
  int resps[4] = {1,7,9,3};
  for (int i = 0; i < qnt; i++){
    scanf("%d", &entrada);
    int x = entrada % 4;
    printf("%d\n",resps[x] );

  }



  return 0;
}
