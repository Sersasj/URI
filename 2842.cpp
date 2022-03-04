#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <algorithm> 
#include <stdio.h>
using namespace std;
typedef long long lli;
int memo[1001][1001] ;


int lcs(string string1, string string2, int index1, int index2){
	for(int i = 0; i <= string1.length(); i++){
		for (int j = 0; j <= string2.length() ; j++){

			if (i == 0 or j == 0){
				memo[i][j] =  0;
			}
			else if (string1[i-1] == string2[j-1]){
				memo[i][j] = memo[i-1][j-1] + 1;

			}
			else{
				memo[i][j] =  max(memo[i-1][j],memo[i][j-1]);
			}
		}
	}

	
	return memo[string1.length()][string2.length()];

}

int main()
{
  string string1, string2;

  cin >> string1 >> string2;
  memset(memo,-1,sizeof(memo));
  int resp = lcs(string1, string2, 0, 0);


  cout << string1.length() + string2.length() - resp   << endl;


  return 0;
}
