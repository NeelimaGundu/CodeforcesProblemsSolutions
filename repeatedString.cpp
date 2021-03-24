#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long int n;
    cin>>n;
    int l,count=0;
    l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='a')
        count++;
    }
    long long int p,left,total;
    p=n/l;
    left = n-l*p;
    total = p*count;
    for(int i=0;i<left;i++)
    if(s[i]=='a')
    total++;
    cout<<total;
    return 0;
}