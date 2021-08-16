/* [2.] PATTERN-2 ASSIGNMENT-6 :--

0
1 2
3 4 5
6 7 8 9 */
   
#include<stdio.h>
int main()
{
	int n,row,col,number=0;
	printf("Enter the number of lines(rows) upto which you want to print the pattern = ");
		scanf("%d",&n);
	
	for(row=1;row<=n;row++) 
	{
		for(col=1;col<=row;col++)
		{
			printf("%d",number);
			number++;
		}
		printf("\n");	
	}
	return 0;
}
