#include<iostream>
#include<string>
using namespace std;
int main()
{
    int h[26];
    for(int i=0;i<26;i++)
    cin>>h[i];
    string s;
    cin>>s;
    int l=s.length();
    int k=0;
    for(int i=0;i<l;i++)
    {
        if(h[int(s[i])-97]>k)
        k=h[int(s[i])-97];
    }
    cout<<k*l;
    return 0;
}