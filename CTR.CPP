#include<iostream.h>
#include<conio.h>
class abc
{
	int a,b;
	public:
	abc()
	{
		a=0;
		b=0;
	}
	void show()
	{
		cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
	}
};
void main()
{
	clrscr();
	abc ob;
	ob.show();
	getch();
}