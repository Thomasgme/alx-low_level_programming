#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * * main - empty point
 * *Description: prints if a number positive or negetive.
 * *Return: 0
 * */
int main()
{
	   int n;

	   srand(time(0));
	   n = rand() - RAND_MAX / 2;
	       if(n > 0)
		           {
				           printf("%d is positive\n", n);
					       } 
	           else if (n == 0) 
			       {
				               printf("%d is zero\n", n);
					           }
		       else if (n < 0){
			               printf("%d is negetive\n", n);
				           }
		           return 0;
}
