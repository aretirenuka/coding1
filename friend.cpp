#include<iostream>
using namespace std;
class base
{
	public:
		int a,b;
		void read()
		{
			cout<<"enter values of a,b:";
			cin>>a>>b;
		}
		friend float mean(base x)
		{
			float m;
			m=(x.a+x.b)/2;
			return m;
		}
	};
		int main()
		{
			base x;
			x.read();
			cout<<"mean:"<<mean(x);
			return(0);
		}