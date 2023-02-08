#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *str = NULL;

	/*Stored in read only part of data segment*/
	str = "GFG";

	/*Problem: trying to modify read only memory*/
	*(str+1) = 'n';

	return 0;
}
