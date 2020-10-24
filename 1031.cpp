#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;



int testar(vector<int> g1,int m){
  //g1.erase(g1.begin());
  int tam = g1.size();
  int resp = 1 ;
  int pulo = m-1;
  //printf("%d\n",m);
  for(int i = 0;i<tam;i++){
    if(pulo + 1>g1.size()){
     do
      {
        pulo -= g1.size();
      } while (pulo >= g1.size());
    }  
    g1.erase(g1.begin() + pulo);
    //printf("%d\n",pulo);
    pulo += m-1;
    
 

  }
  resp = g1[0];
  //resp++;
  //printf("%d\n",g1[0]);

  
  return resp;
}





using namespace std;
int main()
{
  int k, i = 1, pulo=1,n,j=0;
  cin >> n;
 
  vector<int> g1; 
  

  //preenche o vetor

  while(n!=0){
    g1.clear();
    pulo = 1, j = 0;
    for (i = 1; i <= n; i++){    
      g1.push_back(i);    
    }
    g1.erase(g1.begin());
    while(true){
      if(testar(g1,pulo) != 13){
        pulo++;
      }
      else{
        break;
      }
    }
    cout <<  pulo << endl;

    cin >> n;

  }

    

  

  return 0;
}
