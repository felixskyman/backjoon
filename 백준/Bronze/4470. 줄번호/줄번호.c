#include <stdio.h>
int main()
{
	int a;
	char b[51]; // 첫 번째 이유에 의한 수정.

	scanf("%d",&a);

	for (int i = 1; i <= a; i++)
	{
        getchar(); // 마지막 이유에 의한 수정.
		scanf("%[^\n]s", b); // 두 번째 이유에 의한 수정.
		printf("%d. %s\n",i,b);
	}
    return 0; // C에선 최종적으로 종료 코드 삽입을 잊지 말아 주세요.
}