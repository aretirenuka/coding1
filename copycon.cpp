#include<iostream>
using namespace std;
class student
{
	int rno;
	string name;
	float marks;
	public:
		student(int rn,string nm,float m )
		{
			rno=rn;
			name=nm;
			marks=m;
		}
		student(student &x)
		{
			rno=x.rno;
			name=x.name;
			marks=x.marks;
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
		student s1(4521,"renuka",948);
		s1.display();
		student s2(4584,"abhiram",960);
		s2.display();
		s1=s2;
		s1.display();
		student(student x)
		{
			rno=x.rno;
			name=x.name;
			marks=x.marks;
		}
	}