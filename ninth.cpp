#include<iostream>
using namespace std;

class salary
{
	int basic, tax;
	public:
	void input();
	void cal();	
};

void salary :: input()
{
	cout<<"Enter\nBasic salary: ";
	cin>>basic;
	cout<<"Tax: ";
	cin>>tax;
}

void salary :: cal()
{
	int t;
	t = basic - tax;
	cout<<"Salary: "<<t;
}

int main()
{ 
	salary s;
	s.input();
	s.cal();
	return 0;
}
