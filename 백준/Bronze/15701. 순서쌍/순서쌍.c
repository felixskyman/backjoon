#include <stdio.h>

int main() {
  int n, m = 0,re = 0;
  scanf("%d", &n);
  for(int i = 1; i*i<=n; i++){
    if(!(n%i))
      re++;
    m = i*i==n ? 1 : 0;
  }
  printf("%d", m ? re*2-1 : re*2);

  return 0;
}