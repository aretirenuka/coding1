#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	int rno;
	string name;
	float marks;
	public:
		student()
		{
			rno=1204;
			name="renuka";
			marks=4584;
		}
		student(int rn,string nm)
		{
			rno=rn;
			name=nm;
			marks=4521;
		}
		student(int rn,string nm,float m)
		{
			rno=rn;
			name=nm;
			marks=m;
		}
		void display()
		{
			cout<<"rollno:"<<rno;
			cout<<"name:"<<name;
			cout<<"marks:"<<marks;
		}
	};
	int main()
	{
		student s1;
		s1.display();
		student s2(1204,"abhiram");
		s2.display();
		student s3(4521,"renuka",996);
		s3.display();
		return(0);
	}
		