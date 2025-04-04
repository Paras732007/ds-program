#include<stdio.h>
void main()
{
	clrscr();
	  if(remove("demo.txt")==0)
	  {
		printf("file deleted successfuly");
	  }else
	  {
		printf("unable to delet file");
	  }
	  getch();
}