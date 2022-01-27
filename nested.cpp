#include<iostream>
using namespace std;
class X
{
int a;
public:
class Y:
	{
	int b;
	public:
	void show()
	{
	X x;
	x.a=10;
	b=20;
	cout<<x.a<<b;
	}
	};
	};
	int main()
	{
	x::y Y;
	y.show();
	return(0);
	}