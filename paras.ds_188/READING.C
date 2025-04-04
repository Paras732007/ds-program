#include<stdio.h>
void main()
{
	FILE *fp;
	char buff(255);
	clrscr();
	fp=fopen("file.txt","r+");
	while(fscanf(fp,"%s",buff)!=EOF)
	{
		printf("%s",buff);
	}
	fclose(fp);
	getch();
}