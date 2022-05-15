#include<iostream.h>
#include<conio.h>
int linear_search(int a[],int n,int item)
{
	int i,loc=-1;

		for(i=0;i<n;i++)
		{
			if(a[i]==item)
			{
				loc=i;
				break;
			}
		}
	return loc;
}                                   //  Best-  O(1)     Worst- O(n)
void main()    //Average  (1+2+3+4+...n)/n = (n*(n+1)/2)/n = (n+1)/2
		//O(n)
{
	int a[]={12,38,5,56,39,99,34,3,44,1000},p,k;
	clrscr();
	cout<<"Enter Item to searched";
	cin>>k;
	p=linear_search(a,10,k);
	if(p==-1)
		cout<<"Element not found"<<endl;
	else
		cout<<"Element found at location"<<p<<endl;
getch();
}