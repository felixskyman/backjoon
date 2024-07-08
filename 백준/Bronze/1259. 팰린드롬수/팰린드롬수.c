#include <stdio.h>
#include <string.h>

int main()
{
	char arr[100000] = { };
	int i, len, result;
	while (scanf("%s",arr,sizeof(arr)) && arr[0]!='0')
	{
		result = 1;

		len = strlen(arr);

		for (i = 0; i < len / 2; i++)
		{
			if (arr[i] != arr[len - i - 1])
			{
				result = 0;
				break;
			}
		}
		if (result == 1)
		{
			printf("yes\n");
		}
		else if (result == 0)
		{
			printf("no\n");
		}
	}
	
	return 0;
}