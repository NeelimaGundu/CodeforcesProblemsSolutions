#include<iostream>
using namespace std;
int main()
{
    long int n,k;
    int count=0;
    cin>>n>>k;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%k==0)
        count++;
    }
    cout<<count;
    return 0;
}