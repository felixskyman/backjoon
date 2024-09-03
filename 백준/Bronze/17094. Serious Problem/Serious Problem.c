#include <stdio.h>

int main() {
    int a,count2=0,counte=0;
    char b[100001];

    scanf("%d", &a);

    for (int i = 0; i < a; i++){
        scanf(" %c", &b[i]);

        if (b[i]=='2') {
                count2++;
      } else if(b[i]=='e') {
                counte++;
            }
    }
    if (count2 > counte) {
            printf("2");
  } else if (count2 < counte) {
            printf("e");
  } else if (count2 == counte) {
            printf("yee");
        }

    return 0;
}