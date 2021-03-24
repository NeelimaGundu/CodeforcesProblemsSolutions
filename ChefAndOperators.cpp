#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string *p=new string[t];
    for(int i=0;i<t;i++)
    {
        long long int a,b;
        cin>>a>>b;
        if(a<b)
        p[i]='<';
        else if(a>b)
        p[i]='>';
        else
        p[i]='=';
    }
    for(int i=0;i<t;i++)
    cout<<p[i]<<endl;
    return 0;
}