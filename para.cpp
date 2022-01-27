#include<iostream>
using namespace std;
class student
{
	int rno;
	string name;
	float marks;
	public:
		student(int rn,string nm,float m)
		{
			rno=rn;
			name=nm;
			marks=m;
		}
		void display()
		{
			cout<<"RNO:"<<rno;
			cout<<"NAME:"<<name;
			cout<<"MARKS:"<<marks;
		}
	};
	int main()
	{
		student s(1204,"renuka",94);
		s.display();
		return(0);
	}