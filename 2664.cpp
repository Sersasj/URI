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
lli memo[51][100001];


lli solve(lli tempo, lli minimo, lli maximo, lli atual){

	if (memo[tempo][atual] == 0){


		if (tempo == 1){
			memo[tempo][atual] = 1;
		}
		else if (atual == minimo){
			memo[tempo][atual] = solve(tempo-1, minimo, maximo, atual +1);
		}
		else if (atual == maximo){
			memo[tempo][atual] = solve(tempo-1, minimo, maximo, atual -1);

		}
		else{			
			memo[tempo][atual] = solve(tempo-1, minimo, maximo, atual + 1) + solve(tempo-1, minimo, maximo, atual -1);
		}
	}
	return memo[tempo][atual];
}


int main()
{
  lli tempo, minimo, maximo,resp =0;
  cin >> tempo >> minimo >> maximo;
  for(int i = minimo; i <=maximo; i++){
  	resp += solve(tempo, minimo, maximo, i) ;  
  	resp = resp  % 1000000007;
  }

  cout << resp  << endl;


  return 0;
}
