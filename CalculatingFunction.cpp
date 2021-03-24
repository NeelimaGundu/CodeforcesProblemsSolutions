#include<iostream>
using namespace std;
int main()
{
    long long int n,h;
    cin>>n;
    h=(n+1)/2;
    long long int sum = (n/2)*((n/2)+1)- h*h;
    cout<<sum;
    return 0;
}