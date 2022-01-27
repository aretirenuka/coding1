#include<iostream>
using namespace std;
class student
{
	int rno;
	string name;
	float marks;
	public:
		void read();
		void display();
};
void student::read()
{
	cout<<"\nEnter register no:";
	cin>>rno;
	cout<<"\nenter name:";
	cin>>name;
	cout<<"\nenter marks:";
	cin>>marks;
}
void student::display()
{
	cout<<"register no:"<<rno;
	cout<<"name:"<<name;
	cout<<"marks:"<<marks;
}
int main()
{
student s;
s.read();
s.display();
return(0);
}