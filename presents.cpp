#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a = new int[n],t=0;
    while(t!=n)
    {
        int p;
        cin>>p;
        a[p-1]=t+1;
        t++;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}