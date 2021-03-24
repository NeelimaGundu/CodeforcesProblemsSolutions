#include<iostream>
using namespace std;

class test
{
	int a,b;
	public:
	test()
	{
		this->a = 2;
		this->b = 3;	
	}	
	void input();
	void output();
};

void test :: input()
{
	cin>>a>>b;
}

void test :: output()
{
	cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
}


int main()
{
	test o1,o2;
	o1.output();
	o2.input();
	o2.output();
	return 0;
}
