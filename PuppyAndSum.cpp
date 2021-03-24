#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int *a=new int[t];
    for(int i=0;i<t;i++)
    {
        int d,n;
        cin>>d>>n;
        int sum=0;
        for(int j=0;j<d;j++)
        {
            sum=(n*(n+1))/2;
            n=sum;
        }
        a[i]=sum;
    }
    for(int i=0;i<t;i++)
    cout<<a[i]<<endl;
    return 0;
}