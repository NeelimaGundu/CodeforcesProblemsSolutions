#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n>0)
    {
        int p,q;
        cin>>p>>q;
        if(q-p>=2)
        count++;
        n--;
    }
    cout<<count;
    return 0;
}