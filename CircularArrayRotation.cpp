#include<iostream>
using namespace std;
int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    int *a=new int[n],*t=new int[q];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<q;i++)
    {
        int p;
        cin>>p;
        int o=n-(abs(p-k)%n);
        if(o==n)
        o=0;
        t[i]=a[o];
    }
    for(int i=0;i<q;i++)
    cout<<t[i]<<endl;
    return 0;
}