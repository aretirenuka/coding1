#include<iostream>
using namespace std;
int sum(int x,int y)
{
	return x+y;
}
double sum(double x,double y)
{
	return x+y;
}
int sum(int x,int y,int z)
{
	return x+y;
}
double sum(int x,double y)
{
	return(x+y);
}
int main()
{
	cout<<"the sum of two integers:"<<sum(10,20);
	cout<<"the sum of two doubles:"<<sum(10.5,20.7)<<endl;
	cout<<"the sum of three integers:"<<sum(1,3,5)<<endl;
	cout<<"the sum of integer and double:"<<sum(9,8.7)<<endl;
}

