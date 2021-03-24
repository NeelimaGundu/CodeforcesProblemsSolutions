#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length(),count=0;;
    for(int i=0;i<l;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(s[i]==s[j])
            {
                count++;
                break;
            }
            
        }
    }
    l = l-count;
    if(l%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
    return 0;
}