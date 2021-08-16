/* [4.] PATTERN-4 ASSIGNMENT-6 :-

# # # # #
  # # #
	#                           */
	
#include<stdio.h>
int main()
{
	int n,row,space,col;

	for(row=1;row<=3;row++)
	{
		for(space=1;space<=(row-1);space++)
		{
			printf("  ");
		}
		
		for(col=5;col>=(2*row-1);col--)
		{
			printf("# ");	
		}
		printf("\n");
	}
	return 0;
}
	
	

