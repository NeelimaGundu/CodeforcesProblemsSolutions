#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,count=0,i=0;
    cin>>n;
    string s;
    cin>>s;
    while(1)
    {
        if(i==n)
        break;
        if(s[i]=='D')
        {
            while(s[i]=='D')
            i++;
            if(i==n)
            break;
            if(s[i]=='U')
            {
                while(s[i]=='U')
                i++;
                if(i==n)
                break;
                if(s[i]=='D')
                count++;
            }
        }
        i++;
    }
    cout<<count;
    return 0;
}