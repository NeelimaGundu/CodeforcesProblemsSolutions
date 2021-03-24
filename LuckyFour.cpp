#include<iostream>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    long int *a=new long int[t];
    for(int i=0;i<t;i++)
    cin>>a[i];
    for(int i=0;i<t;i++)
    {
        long int n=a[i];
        while(n!=0)
        {
            if(n%10==4)
            count++;
            n=n/10;
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}