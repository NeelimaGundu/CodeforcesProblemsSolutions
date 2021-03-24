#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int a[100]={0};
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a[k]++;  
    }
    for(int i=0;i+1<n;i++)
        if(a[i]+a[i+1]>count)
        count=a[i]+a[i+1];
    cout<<count;
    return 0;
}