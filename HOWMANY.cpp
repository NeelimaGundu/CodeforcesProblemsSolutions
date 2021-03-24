#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    if(n==0)
    {
        cout<<1;
        exit(0);
    }
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    if(count==1)
    cout<<1;
    else if(count==2)
    cout<<2;
    else if(count==3)
    cout<<3;
    else
    {
        cout<<"More than 3 digits";
    }
    return 0;
}