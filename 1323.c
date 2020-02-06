#include <stdio.h>

int main() {
  int i,resp=0;
  while(1){
    scanf("%d",&i);
    if(i==0){
      break;

    }
    else{
      resp = (i*((i+1)*(2*i+1))/6);
    printf("%d\n",resp);

    }

  }
}
