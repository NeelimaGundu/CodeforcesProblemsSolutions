#include<iostream>
using namespace std;
int main()
{
    int m,n,r;
    cin>>m>>n>>r;
    int *a=new int[m*n];
    for(int i=0;i<m*n;i++)
    cin>>a[i];
    int p=a[0];
    for(int i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    for(int i=m-1;i>0;i--)
    {
        if(i==1)
        {
            a[n*i]=p;
        }
        else
        {
            t=
            a[n*i]=a[n*(i-1)]
        }
    }

    return 0;
}