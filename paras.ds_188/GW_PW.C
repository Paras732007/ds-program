#include<stdio.h>
void main()
{
	FILE *fp;
	int i;
	fp=fopen("demo.txt","w");
	for(i=1:i<=10;i++)
	{
		pwtw(i,fp);
	}
	fclose(fp);
	fp=fopen("demo.txt","r");
	printf("this is your ccontent=");
	for(i=1;1<=10;i++)
	{
		i=getw(fp);
		printf("%d",i);
		printf(" ");
	}
	fclose(fp);
	getch();
}