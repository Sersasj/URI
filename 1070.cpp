#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;


int main() {
  int n, impar=0,count=0;
  
  cin >> n;
  impar = n;
  while(count<6){
   
    if(impar%2 != 0){
      cout << impar << endl;
      count++;
      
    }
    impar++;
    

  }
}
