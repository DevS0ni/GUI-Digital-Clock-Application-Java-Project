/* [3.] PATTERN-3 ASSIGNMENT-6 :-

1
2  2
3  3  3
4  4  4  4 */

#include<stdio.h>
int main()
{
	int n,row,col;
	printf("Enter the number of lines(rows) upto which you want to print the pattern = ");
		scanf("%d",&n);
	
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d",row);
		}
		printf("\n");
	}
	return 0;
}
