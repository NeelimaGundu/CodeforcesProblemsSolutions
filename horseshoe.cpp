#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long int s[4];
    cin>>s[0]>>s[1]>>s[2]>>s[3];
    sort(s,s+4);
    int count=0;
    if(s[0]==s[1])
    count++;
    if(s[1]==s[2])
    count++;
    if(s[2]==s[3])
    count++;
    cout<<count;
    return 0;
}