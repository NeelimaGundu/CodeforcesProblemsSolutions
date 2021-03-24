#include<iostream>
using namespace std;

class test
{
	int a,b;
	public:
	test()
	{
		a = 20;
		b = 4;
	}
	void show();	
};

void test :: show()
{
	cout<<"a: "<<a<<endl<<"b: "<<b;	
}

int main()
{
	test t;
	t.show();
	return 0;
}
