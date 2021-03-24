#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int mmax=0;
    int mmin=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[mmax])
        {
            mmax=i;
        }
    }
    for(int i=mmax;i-1>=0;i--)
    {
        if(a[i-1]<a[i])
        {
            int temp=a[i-1];
            a[i-1]=a[i];
            a[i]=temp;
            count++;
        }
    }
    for(int i=1;i<n;i++)
    {
        if(a[i]<=a[mmin])
        {  
            mmin=i;
        }
    }
    for(int i=mmin;i+1<n;i++)
    {
        if(a[i]<a[i+1])
        {
            int temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
            count++;
        }
    }
    cout<<count;
    return 0;
}