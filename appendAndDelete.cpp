#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,t;
    int k,count=0,moves=0;
    cin>>s>>t>>k;
    int sl=s.length(),tl=t.length();
    if(s==t)
    {
        if((k==0)||(k>=2*sl))
        cout<<"Yes";
        else
        cout<<"No";
    }
    else
    {
        for(int i=0;i<tl;i++)
        {
            if(s[i]==t[i])
            {
                count++;
                continue;
            }
            else break;
        }
        if(count<tl)
        {
            moves = sl-count;
            moves+= tl - count; 
        }
        else if(count==tl)
        {
            moves=sl-count;
        }
        if(k>=moves)
        cout<<"Yes";
        else
        cout<<"No";
    }
    return 0;
}