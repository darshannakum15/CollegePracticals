#include <stdio.h>

int main()
{
	int a=5,b=3,c;
    c=a+b;
	printf("+: %d\n", c);
	c=a-b;
	printf("- : %d\n", c);
	c=a*b;
	printf("* : %d\n", c);
	c=b/a;
	printf("/ : %d\n", c);
	c=a%b;
	printf("Percent : %d", c);
	return 0;
}
