/*
 * fibonacci.c
 *
 *  Created on: Jan 28, 2016
 *      Author: klohiya
 */

#include<stdio.h>
int main()
{
		int ans, x, a;
		for(a = 0; a<= 25; a++){
		ans = fibonacci(x);
		printf("%d\n",ans);

		}
}
int fibonacci(int a)
{


	if(a == 0)
	{
		return 0;
	}
	if(a ==1)
	{
		return 1;
	}
	if(a < 25)
	{
		return (fibonacci(a + 1) + fibonacci(a + 2));

	}

}

