#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a=new int[n],*p=new int[n],count=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            count++;
        }
        p[i]=count;
        count=0;
    }
    sort(p,p+n);
    if(p[n-1]==1)
    cout<<n-1;
    else
    cout<<n-p[n-1];
    return 0;
}