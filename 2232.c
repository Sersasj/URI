#include <stdio.h>
#include <math.h>

int main() {
  int x,y, resp =0,qnt;  
  scanf("%d",&qnt);
  int linhas[qnt];

  for(x=0;x<qnt;x++){
    scanf("%d",&linhas[x]);
  }
  for(y=0;y<qnt;y++){
    resp = 0;
    for(x=0;x<linhas[y];x++){
      resp += pow(2,x);
  }
    printf("%d\n",resp);
  }
;
  
}
