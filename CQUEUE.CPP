#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX],rear=-1,front=-1;
void enqueue(int item)
{
	if(front==((rear+1)%MAX))
	{
		cout<<"Queue is Full\n";
	}
	else if(front==-1)
	{
		front=0;
		rear=0;
		a[rear]=item;
	}
	else
	{
		rear=(rear+1)%MAX;
		a[rear]=item;
	}
}
int dequeue()
{
	int item=-1;
	if(front==-1)
	{
		return -1;
	}
	else if(front==rear)
	{
		item=a[front];
		rear=front=-1;
	}
	else
	{
		item=a[front];
		front=(front+1)%MAX;
	}
	return item;
}
int isempty()
{
	if(front==-1)
		return 1;
	else
		return 0;
}
int isfull()
{
	if(rear==MAX-1)
		return 1;
	else
		return 0;
}
int peek()
{
	if(front!=-1)
		return a[front];
	else
		return -1;
}
void display()
{
	int i;
	if(front==-1)
	{
		cout<<"Queue is empty";
	}
	else
	{
		for(i=front;i<=rear;i++)
		cout<<a[i]<<"\n";
	}
	if(front>rear)
	{
		for(i=front;i<=MAX-1;i++)
			cout<<a[i]<<"\n";
		for(i=0;i<=rear;i++)
			cout<<a[i]<<"\n";
	}
}
void main()
{
	int n,item,k,loc;
	char str[20];
	clrscr();
	while(1)
	{
		cout<<"\nPress 1 to enqueue\n";
		cout<<"Press 2 to dequeue\n";
		cout<<"Press 3 to Display\n";
		cout<<"Press 4 exit\n";
		cout<<"Press 5 to check empty\n";
		cout<<"Press 6 to check full\n";
		cout<<"Press 7 to Peek or Peep\n";
		cin>>n;
		switch(n)
		{
			case 1:
			cout<<"Enter Item\n";
			cin>>item;
			enqueue(item);
			break;
			case 2: item=dequeue();
				if(item==-1)
					cout<<"Queue is Empty\n";
				else
					cout<<"Item deleted is "<<item;
				break;
			case 3:display();
			       break;
			case 4:
			exit(1);
			break;
			case 5: if(isempty())
					cout<<"Queue is Empty\n";
				else
					cout<<"Queue is not Empty\n";
			break;
			case 6: if(isfull())
					cout<<"Queue is Full\n";
				else
					cout<<"Queue is not Full\n";
			break;
			case 7: item=peek();
				if(item==-1)
					cout<<"Queue Empty";
				else
					cout<<"Item on front is "<<item;
			break;
			default: cout<<"Wrong Input";
		}
	}
}
