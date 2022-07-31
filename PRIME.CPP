#include<iostream.h>
#include<conio.h>
int prime(int n)
{
	int i;
	for(i=2;i*i<=n;i++)// i<=sqrt(n)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
void main()
{
	int n;
	clrscr();
	cout<<"Enter number";
	cin>>n;
	if(prime(n))
		cout<<"It is a Prime Number";
	else
		cout<<"It is not a Prime Number";
	getch();
}