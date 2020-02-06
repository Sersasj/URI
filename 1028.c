#include <stdio.h>


int mdc(int a, int b) {
	int q, r;
	r = a%b;
	if(r!=0) {
		return mdc(b, r);
	} else {
		return b;
	}
}


int main(void) {
  int x=0,qnt,x1,x2,count,resp=0;
  scanf("%d",&qnt);
  while(x<qnt){
    scanf("%d",&x1);
    scanf("%d",&x2);
    resp = mdc(x1,x2);
    printf("%d\n",resp);
    x++;

  }



  return 0;
}
