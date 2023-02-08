#include<stdio.h>

int main()
{
#ifdef MY_MACRO
	printf("\n Macro defined \n");
#endif
	char c = -10;
//	printf("c is %d\n", c);
	printf("Hello, World\n");
	return 0;
}
