#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int i=1,a[26]={0},count=0;
    while(s[i]!='}')
    {
        if((s[i]==',')||(s[i]==' '))
        {
            i++;
            continue;
        }
        a[int(s[i])-97]++;
        i++;
    }
    for(int j=0;j<26;j++)
    {
        if(a[j]!=0)
        count++;
    }
    cout<<count;
    return 0;
}