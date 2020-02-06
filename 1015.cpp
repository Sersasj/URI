#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  float x,y,w,z,resp;
  cin >> x >> y >> w >> z;
  resp = sqrt(pow((x-w),2)+pow((y-z),2));
  cout << fixed;
  cout << setprecision(4);
  cout << resp<<"\n";

};
