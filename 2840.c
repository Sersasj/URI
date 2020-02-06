#include <stdio.h>
#include <math.h>



int main(void) {
  int raio, qnt,resp1;
  float resp, pi=3.1415;
  scanf("%d ",&raio);
  scanf("%d",&qnt);
  resp = (4*pi*raio*raio*raio)/3;
  resp1 = floor(qnt/resp);
  printf("%d\n",resp1);
  return 0;
}
