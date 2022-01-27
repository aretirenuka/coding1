#include<iostream>
using namespace std;
class sample
{
	int rno;
	static int code;
	public:
		void read()
		{
			rno=++code;
		}
		void display()
		{
			cout<<"rno:"<<endl;
		}
		static void show()
		{
			cout<<"code:"<<code;
		}
	};
	int sample::code=1200;
	int main()
	{
		sample a,b,c;
		sample::show();
		a.read();
		b.read();
		c.read();
		a.display();
		b.display();
		c.display();
		sample::show();
		return(0);
	}
	