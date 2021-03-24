#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int p=0,n,k;
    string *s=new string[t];
    while(p<t)
    {
        cin>>n>>k;
        int *a=new int[n],count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=0)
            count++;
        }
        if(count>=k)
        s[p]="NO";
        else
        s[p]="YES";
        p++;
    }
    p=0;
    while(p<t)
    {
        cout<<s[p]<<endl;
        p++;
    }
    return 0;
}