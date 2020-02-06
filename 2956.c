 #include <stdio.h>

int main() {
  long double P, T,resp;
  scanf("%LF ",&P);
  scanf("%LF",&T);
  resp = P*T/2;
  printf("Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = %.5LF.\n",resp);
  return 0;
}
