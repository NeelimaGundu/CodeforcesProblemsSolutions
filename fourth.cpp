#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	bool check = 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			check = true;
			break;
		}
	}
	if(check)
		cout<<"Not prime!";
	else
		cout<<"Prime!";
	return 0;
}

