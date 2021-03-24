#include<iostream>
using namespace std;
int main()
{
    int n,steps=0;
    cin>>n;
    if(n<=5)
    cout<<1;
    else
    {
        if(n%5==0)
        cout<<n/5;
        if(n%5>0)
        {
            steps += n/5;
            n = n%5;
            if(n<5)
            steps++;
            cout<<steps;
        }
    }
    return 0;
}