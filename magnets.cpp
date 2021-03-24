#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string *s=new string[n];
    for(int i=0;i<n;i++)
    cin>>s[i];
    int count=1;
    for(int j=0;j+1<n;j++)
    {
        if(s[j]!=s[j+1])
        count++;
    }
    cout<<count;
    return 0;
}