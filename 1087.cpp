#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <vector>



using namespace std;
int main()
{
  int x1,x2,y1,y2;


  cin >> x1 >> y1 >> x2 >> y2;
  while(x1 != 0 && y1 !=0 && x2 != 0 && y2 != 0){
   
    if(x1 == x2 && y1 == y2){
      cout << 0 << endl;     
    } 
    else if(x1 == x2 || y1 == y2 || x1-x2 == y1-y2 || -1*(x1-x2) == y1-y2 || x1-x2 == -1*(y1-y2) ){
      cout << 1 << endl;
    }
    else {
      cout << 2 << endl;
    }

    cin >> x1 >> y1 >> x2 >> y2;
  }

  return 0;
}
