#include<iostream>
#include<cmath>
using namespace std;

class test
{
	int a,b;
	public:
	void read()
	{
		cout<<"Enter a and b: \n";
		cin>>a>>b;
	}
	int result(test);
};

int test :: result(test t)
{
	return t.a+t.b;
}

int main()
{
	test x;
	x.read();
	int t;
	t = x.result(x);
	cout<<"Result: \n"<<t;
	return 0;
}
