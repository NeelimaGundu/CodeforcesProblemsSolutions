#include<iostream>
using namespace std;
int main()
{
    int n,p,k;
    cin>>n>>p;
    if(p>n/2)
    {
        k=(n-p)/2;
    }
    else if((n%2==0)&&(k==n-1))
    k=1;
    else  
    {
        k=p/2;
    }
    cout<<k;
    return 0;
}