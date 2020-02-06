#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
float tempo,velocidade;

  cin>>tempo>>velocidade;
  cout << fixed;
  cout << setprecision(3);
  cout<<tempo*velocidade/12<<endl;
};
