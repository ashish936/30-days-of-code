//Given a base-10 integer,n, convert it to binary (base-2). Then find and print the base-10 integer
//denoting the maximum number of consecutive 1's in n's binary representation.

#include<stdio.h>

int main()
{
	int n;
	int quotient,remainder,counter=0,max_counter=0;
        printf("enter any number:\n");
		scanf("%d",&n);
        while(n!=0)
        {
            //finding out the remainder of the number
            remainder = n % 2;
            
            if(remainder==1)
            {
                counter++;
                if(max_counter < counter)
                {
                    max_counter = counter;
                }
                
                n=n/2;
            }
            else
            {
                counter = 0;
                n=n/2;
            }
                
        }
        printf("The number of consecutive 1's in its binary representation is %d",max_counter);
	
	return 0;
}
