#include<iostream>
#include<string>
using namespace std;
int main()
{
    /*int check=0,check1=0,check2=0, l;*/
    string s1,s2;
    cin>>s1>>s2;
    int l= s1.length();
    for(int i=0;i<l;i++)
    {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    if(s1>s2)
    cout<<1;
    else if(s1==s2)
    cout<<0;
    else cout<<-1;
    return 0;
}