#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a=new int[n],*p=new int[],count=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if()
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            count=j-i;
        }
        p=count;
        count=0;
    }
    return 0;
}