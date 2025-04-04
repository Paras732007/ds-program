#include<stdio.h>
#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("file.txt","W");
	fprintf(fp,"welcome to bca");
	fclose(fp);
	getch();
}