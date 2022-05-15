#include<stdio.h>
#include<conio.h>
void swap(char str[],int i,int j)
{
	char ch;
	ch=str[i];
	str[i]=str[j];
	str[j]=ch;
}
void fxn(char str[],int l,int r)
{
	int i;
	if(l==r)
	{
		printf("%s\n",str);
	}
	for(i=l;i<=r;i++)
	{
		swap(str,i,l);
		fxn(str,l+1,r);
		swap(str,i,l);
	}

}
void main()
{
	char str[]="ABCD";
	clrscr();
	fxn(str,0,strlen(str)-1);
	getch();
}