#include <stdio.h>

int main()
{
	int y=989890,x=98.9890;
	char c[20];
	printf("%6d\n",y);
	printf("%-6d\n",y);
	printf("%06d",y);
	
	printf("%6.3f\n", x);
	printf("%6.2f\n",x);
	printf("%-6.2f\n", x);
	
	scanf("%[^\n]",c);
	printf("%s",c);

	return 0;
}
