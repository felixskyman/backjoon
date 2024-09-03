#include <stdio.h>
#include <string.h>

char a[40] = {};

int main() {
  int n, b, bana = 0, straw = 0, lime = 0, plum = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
      scanf("%s %d", a, &b);
      if (!strcmp(a, "BANANA")) bana += b;
      else if (!strcmp(a, "STRAWBERRY")) straw += b;
      else if (!strcmp(a, "LIME")) lime += b;
      else if (!strcmp(a, "PLUM")) plum += b;
  }
if (bana ==5 || plum == 5 || straw == 5 || lime == 5){
	printf("YES");
}
  else printf("NO");
  return 0;
}