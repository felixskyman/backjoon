#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
    int time,dri;
    scanf("%d %d", &time,&dri);
    if ((12<=time && time <= 16) && (dri==0))
        printf("%d", 320);
    else if(time<12 || (dri==1))
        printf("%d", 280);
    else if(time > 16)
        printf("%d", 280);
    return 0;
}