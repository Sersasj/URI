#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
    long double A,B,resp;
    cin >> A;
    cin >> B;
    resp = ((A*3.5)+(B*7.5))/11;
    cout << fixed;
    cout << setprecision(5);
    cout << "MEDIA = "<<resp<<"\n";
}
