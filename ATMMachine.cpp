#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string *s=new string[t];
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        int *a=new int[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            if(k>=a[j])
            {
                k=k-a[j];
                s[i]+='1';
            }
            else
            {
                s[i]+='0';
            }
        }
    }
    for(int i=0;i<t;i++)
    cout<<s[i]<<endl;
    return 0;
}