#include<iostream>
using namespace std;
class employee
{
	public:
		employee()
		{
			cout<<"constructor invoked:";
		}
		~employee()
		{
			cout<<"destructor invoked:";
		}
	};
	int main()
	{
		employee e1;
		employee e2;
		return(0);
	}