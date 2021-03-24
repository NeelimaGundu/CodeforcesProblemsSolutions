#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<26)
    {
        cout<<"NO";
        return 0;
    }
    string s;
    cin>>s;
    int alp[26]={0};
    for(int i=0;i<n;i++)
    {
        if(int(s[i])<97)
        alp[int(s[i])-65]++;
        else
        alp[int(s[i])-97]++;
    }
    int check=0;
    for(int i=0;i<26;i++)
    {
        if(alp[i]==0)
        {
            check=1;
            break;
        }
    }
    if(check==0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}