#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int *ans=new int[t];
    for(int i=0;i<t;i++)
    {
        int n,check=0;
        cin>>n;
        int *a=new int[n];
        for(int j=0;j<n;j++)
        cin>>a[j];
        sort(a,a+n);
        for(int j=0;j<n-1;j++)
        {
            int p=abs(a[j]-a[j+1]);
            if((p==0)||(p==1))
            {
                continue;
            }
            else
            {
                check=1;
                break;
            }
        }
        if(check==0)
        ans[i]=1;
        else
        ans[i]=0;
    }
    for(int i=0;i<t;i++)
    if(ans[i]==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}