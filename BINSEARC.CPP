//Binary Search
#include<iostream.h>
#include<conio.h>
int binary_search(int a[],int n,int item)
{
	int loc=-1,l=0,r=n-1,mid;

		while(l<=r)
		{
			mid=(l+r)/2;
			if(a[mid]==item)
			{
				loc=mid;
				break;
			}
			else if(a[mid]<item)
			{
				l=mid+1;
			}
			else
			{
				r=mid-1;
			}
		 }
	return loc;
}
void main()
{
	int a[]={2,4,5,7,11,13,15,16,22,30},p,k;
	clrscr();
	cout<<"Enter Item to searched";
	cin>>k;
	p=binary_search(a,10,k);
	if(p==-1)
		cout<<"Element not found"<<endl;
	else
		cout<<"Element found at location"<<p<<endl;
getch();
}