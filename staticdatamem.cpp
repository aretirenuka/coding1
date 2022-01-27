#include<iostream>
using namespace std;
class student
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
			cout<<"rno:"<<rno;
			cout<<"code:"<<code;
		}
	};
	int student::code=1200;
	int main()
	{
		student a,b,c;
		a.read();
		b.read();
		c.read();
		a.display();
		b.display();
		c.display();
		return(0);
	}