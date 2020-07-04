#include <stdio.h>
#include <stdlib.h>
//using namespace std;  

void print_Rectangle(int h , int w )
{
	
	for (int i=0; i<h; i++)
	{
		printf ("\n"); 
		for (int j=0; j<w; j++)
		{
			if (i == 0 || i == h-1 ||
			  j== 0 || j == w-1  )
				printf ("A"); 
			else 
				printf  (" "); 
		}
	}
}



