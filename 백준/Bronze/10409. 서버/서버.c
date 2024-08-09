int main() 
{
    int a, b, n, sum=0, i;

	scanf("%d %d", &a, &b);

	for(i=0;i<a;i++)
	{
		scanf("%d", &n);
		sum+=n;
		if(sum>b)
			break;
	}

	printf("%d\n", i);
	return 0;
}