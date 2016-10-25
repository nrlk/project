/*
 * fibonacci1.c
 *
 *  Created on: Jan 30, 2016
 *      Author: klohiya
 */

#include<stdio.h>
int main()
{
	int fib[25];
	int i = 2;
	fib[0] = 0;
	fib[1] = 1;
		for(i = 2; i <= 23; i++)
			{
			fib[i] = fib[i - 1] + fib[i - 2];
			printf("%d\n",fib[i]);
			}

}
