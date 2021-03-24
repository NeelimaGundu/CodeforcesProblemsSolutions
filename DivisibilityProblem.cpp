#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long int *ans=new long int[t];
    for(int i=0;i<t;i++)
    {
        long int a,b;
        cin>>a>>b;
        if(a%b==0)
        ans[i]=0;
        else
        ans[i]=b- a%b;
    }
    for(int i=0;i<t;i++)
    cout<<ans[i]<<endl;
    return 0;
}