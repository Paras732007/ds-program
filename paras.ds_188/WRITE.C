#include<stdio.h>
#include<stdio.h>
void main()
{
	  FILE *fp;
	  clrscr();
	  fp=fopen("file.txt","w");
	  fprintf(fp,"welcome to bca div-b");
	  fclose(fp);
	  getch();
}