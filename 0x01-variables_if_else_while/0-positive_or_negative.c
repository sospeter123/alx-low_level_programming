#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** main - Determine if a random number is a positive,negative or a zero.
 * return: 0 on success
 *
 */
int main (void)
{ 
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	  printf("%d is negative\n", n);
	}
       else if (n == 0)
       { 
         printf("%d is zero\n", n);

       } 
       else 
       {
	 printf("%d is negative\n", n);
       }
          
         return 0;
}	 

