#include<iostream>
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
		marks=94;
	}
	void display()
	{
		cout<<"rno"<<rno;
		cout<<"name"<<name;
		cout<<"marks"<<marks;
	}
};
int main()
{
	student s;
	s.display();
	return(0);
}
