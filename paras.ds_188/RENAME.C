#include<stdio.h>
#include<conio.h>
void main()
{
	int ret;
	char oldname[]="file.txt";
	char newname[]="newfile.txt";
	clrscr();
	ret=rename(oldname,newname);
	if(ret==0)
	{
		printf("file rename successfuly");
	}
	else
	{
		printf("error:unable to rename this file");
	}
	getch();
}