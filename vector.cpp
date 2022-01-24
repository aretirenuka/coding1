#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int i;
	vector<int>v1;
	vector<int>::iterator itr;
	cout<<"\n vector is empty:"<<v1.empty();
	for(i=0;i<5;i++)
	v1.push_back(i+1);
	cout<<"\n Vector elements are:";
	for(itr=v1.begin();itr!=v1.end();itr++)
	cout<<*itr<<" ";
	itr=v1.begin();
	cout<<"\n first element:"<<*itr;
	v1.push_back(6);
	v1.pop_back();
	cout<<"\n first element:"<<v1.front();
	cout<<"\n last element:"<<v1.back();
	itr=v1.end()-1;
	cout<<"\n last element:"<<*itr;;
	cout<<"\n element at index 4:"<<v1.at(4);
	cout<<"\n capacity:"<<v1.capacity();
	cout<<"\n size:"<<v1.size();
	cout<<"\n vector is empty:"<<v1.empty();
	v1.insert(v1.begin(),0);
	cout<<"\n vector elements are:";
	for(itr=v1.begin();itr!=v1.end();itr++)
	cout<<*itr<<" ";
	return(0);
}