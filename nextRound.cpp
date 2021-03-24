#include<iostream>
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int *a = new int[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(a[0]==0)
    cout<<count;
    else
    {
            if(a[k-1]==0)
            {
                for(int i=0;i<k-1;i++)
                if(a[i]>a[k-1])
                count++;
                cout<<count;
            }
            else
            {
                for(int i=0;i<n;i++)
                if(a[i]>=a[k-1])
                count++;
                cout<<count;
            }
    }
    return 0;
}