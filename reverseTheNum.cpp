#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string *a=new string[t];
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        int k=stoi(s);
        while(k%10==0)
        k=k/10;
        s=to_string(k);
        int l=s.length();
        for(int j=0;j<l/2;j++)
        swap(s[j],s[l-j-1]);
        a[i]=s;
    }
    for(int i=0;i<t;i++)
    cout<<a[i]<<endl;
    return 0;
}