#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long int *ans=new long int[t];
    for(int i=0;i<t;i++)
    {
        long int n;
        cin>>n;
        ans[i]=n-(n/2+1);
    }
    for(int i=0;i<t;i++)
    cout<<ans[i]<<endl;
    return 0;
}