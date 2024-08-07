#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
    char agents[5][11]; 
    for (int i = 0; i < 5; i++) {
        scanf("%s", agents[i]);
    }
    int fbi_agents[5]; 
    int count = 0;     

    for (int i = 0; i < 5; i++) {
        if (strstr(agents[i], "FBI") != NULL) {
            fbi_agents[count++] = i + 1;
        }
    }
    if (count > 0) {
        for (int i = 0; i < count; i++) {
            printf("%d ", fbi_agents[i]);
        }
    }
    else {
        printf("HE GOT AWAY!");
    }

    return 0;
}