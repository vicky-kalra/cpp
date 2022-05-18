class MyThread extends Thread
{
	int n;
	MyThread(int x)
	{
		n=x;
	}
	public void run()
	{
		System.out.println("Thread"+n+"Starts");
		for(int i=1;i<=10;i++)
		{
			System.out.println("Thread"+n+"Iteration"+i);
		}
		System.out.println("Thread"+n+"Ends");
	}	
}
class ThreadDemo
{
	public static void main(String args[])
	{
		System.out.println("Main Thread Starts");
		MyThread t1=new MyThread(1);
		MyThread t2=new MyThread(2);
		MyThread t3=new MyThread(3);
		t1.start();
		t2.start();
		t3.start();
		System.out.println("Main Thread Ends");
	}
}
