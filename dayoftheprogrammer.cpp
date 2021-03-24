#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    if(n<1918)
    {
        if(n%4==0)
        k=12;
        else
        k=13;
    }
    else if(n==1918)
    k=26;
    else 
    {
        if((n%4==0)&&(n%100!=0))
        {
            k=12;
        }
        else if(n%400==0)
        k=12;
        else 
        {
            k=13;
        }
        
    }
    cout<<k<<"."<<"09"<<"."<<n;
    return 0;
}