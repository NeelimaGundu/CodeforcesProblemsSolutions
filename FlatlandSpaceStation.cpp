#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(m==n)
    {
        cout<<0;
        exit(0);
    }
    int *s=new int[m],*a=new int[n];
    for(int i=0;i<m;i++)
    cin>>s[i];
    int max=n,t;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            t=abs(s[j]-i);
            if(t<max)
            max=t;
        }
        a[i]=max;
        max=n;
    }
    sort(a,a+n);
    cout<<a[n-1];
    return 0;
}