/* PATTERN-1 ASSIGNMENT-5 :-
    1
   12
  123
 1234 */
 
#include<stdio.h>
int main()
{
	int row,col,space;
	for(row=1;row<=4;row++)
	{
		for(space=1;space<=(4-row);space++)
		{
			printf(" ");
		}
		for(col=1;col<=row;col++)
		{
			printf("%d",col);
		}
		printf("\n");
	}
	return 0;
}
 
