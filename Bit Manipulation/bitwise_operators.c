#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.

int max_a_and_b = 0,max_a_or_b = 0,max_a_xor_b = 0;

 for(int i=1; i<n; i++)
	{
		for(int j = 1; j<n; j++)
		{
			if(j < i)
			{
				if(((j&i) < k) && ((j&i) > max_a_and_b))
				{
					max_a_and_b = j&i;


				}
				if(((j|i) < k) && ((j|i) > max_a_or_b))
				{
					max_a_or_b = j|i;


				}
				if(((j^i) < k) && ((j^i) > max_a_xor_b))
				{
					max_a_xor_b = j^i;


				}
				

			}			

	
		}

	}

	printf("Max of a&b: %d\n",max_a_and_b);
	printf("Max of a|b: %d\n",max_a_or_b);
	printf("Max of a^b: %d\n",max_a_xor_b);
  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

