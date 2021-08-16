/* [5.] PATTERN-5 ASSIGNMENT-6 :-
	
	*
   *** 
  *****
 *******
*********
 *******
  *****
   ***   
    *                */
    
#include<stdio.h>
int main()
{
	int row,col,space;
	for(row=1;row<=5;row++)
	{
		for(space=1;space<=(5-row);space++)
		{
			printf(" ");
		}
	
		for(col=1;col<=((2*row)-1);col++)
		{
			printf("*");
		}
		printf("\n\n");
	}
	
	for(row=1;row<=4;row++)
	{
		for(space=1;space<=row;space++)
		{
			printf(" ");
		}
		for(col=7;col>=((2*row)-1);col--)
		{
			printf("*");
		}
		printf("\n\n");
	}
	
	return 0;
}



