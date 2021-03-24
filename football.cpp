#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length(),count=0,check=0;
    for(int i=0;i+1<l;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            count=0;
        }
        
        if(count>=6)
        {
            check=1;
            break;
        }
    }
    if(check==1)
    cout<<"YES";
    else
    cout<<"NO";;
    return 0;
}