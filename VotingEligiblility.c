#include <stdio.h>

int main()
{
	int Age ;
	printf("ENTER YOUR AGE :-");
	scanf("%d",&Age);
	if (Age>=18) {
		printf("YOU ARE ELIGIBLE TO VOTE");
	}
	else {
		printf("YOU ARE NOT ELIGIBLE TO VOTE");
	}
	return 0;
}