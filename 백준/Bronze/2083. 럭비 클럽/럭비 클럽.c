#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int age,kg;
	char name[100];
	while (1){
		scanf("%s %d %d", name, &age, &kg);
		if (name[0] == '#' && age == 0 && kg == 0)
		{
			break;
		}
		if (age>17 || kg>=80){
			printf("%s Senior\n", name);
		}
		else{
			printf("%s Junior\n", name);
		}
	}
    return 0;
}