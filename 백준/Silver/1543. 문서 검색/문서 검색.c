#include <stdio.h>
#include <string.h>

int main() {
    char doc[2501], sea[51];
    int count = 0;
    char* pos;

    gets(doc);
    gets(sea);

    
    pos = doc;

    while ((pos = strstr(pos, sea)) != NULL) {
        count++;
        pos += strlen(sea);
    }

    printf("%d\n", count);

    return 0;
}