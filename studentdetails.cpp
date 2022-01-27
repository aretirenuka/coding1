#include<iostream>
using namespace std;
class student
{
	public:
		int rno;
		string name;
		float marks;
	void read()
	{
			cout<<"enter register no:";
			cin>>rno;
			cout<<"enter name:";
			cin>>name;
			cout<<"enter marks";
			cin>>marks;
	}
	void display()
	{
			cout<<"register no:"<<rno;
			cout<<"name:"<<name;
			cout<<"marks:"<<marks;
	}
};
int main()
{
	student s;
	s.read();
	s.display();
	return(0);
}