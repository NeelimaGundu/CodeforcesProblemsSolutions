#include<iostream>
using namespace std;

class sum
{
	int a,b;
	public:
		void input()
		{
			cout<<"Input data: \n";
			cin>>a>>b;	
		}	
		void output();
		sum add(sum p, sum q)
		{
			sum t;
			t.a = p.a + q.a;
			t.b = p.b + q.b;
			return t;
		}
};

void sum :: output()
{
	cout<<"Sum: \n";
	cout<<a<<endl<<b;
}

int main()
{
	sum o1,o2,o3;
	o1.input();
	o2.input();
	o3 = o3.add(o1,o2);
	o3.output();
	return 0;
}
