#include <stdio.h>
#include <stdlib.h>

int main()
{
	char city[512] = "";
	printf("Your city? ");
	scanf("%s", city);

	char command[512] = "";
	sprintf(command, "curl wttr.in/~%s?0", city);
	system(command);

	return 0;
}
