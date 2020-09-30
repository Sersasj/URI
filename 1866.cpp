#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;


int main() {
  int count, i=0,qnt;
  
  cin >> count;
  while(i<count){
    cin >> qnt;
    if(qnt%2 == 0){
      cout << "0" << endl;
    }
    else{
      cout << "1" << endl;
    }
    i++;
    

  }
}
