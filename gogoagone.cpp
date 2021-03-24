#include<iostream>
using namespace std;
int main()
{
    int a[8],n,pool=0;
    for(int i=0;i<8;i++)
    {
        cin>>a[i];
        pool+=a[i];
    }
    cin>>n;
    for(int j=0;j<n;j++)
    {
        int k,p;
        cin>>k>>p;
        if(a[k-1]>a[p-1])
        pool=pool - a[p-1];
        else
        pool= pool - a[k-1];
    }
    cout<<pool;
    return 0;
}