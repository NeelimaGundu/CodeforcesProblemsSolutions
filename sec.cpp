#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sum;
	cout<<"Enter 3 numbers: \n";
	cin>>a>>b>>c;
	a = (a > b) ? a : b;
	a = (a > c) ? a : c;
	cout<<"Largest number: "<<a;
	return 0;
}

