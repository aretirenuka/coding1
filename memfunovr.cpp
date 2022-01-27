#include<iostream>
using namespace std;
class Print Data;
{
	public:
	void print(int i)
	{
	cout<<"printing integer:"<<i;
	}
	void print(float f)
	{
	cout<<"printing float:"<<f;
	}
	void print(char c)
	{
	cout<<"printing character:"<<c;
	}
};
int main()
	{
	Print Data pd;
	pd.print(5);
	pd.print(10.462);
	pd.print("hello");
	return(0);
	}