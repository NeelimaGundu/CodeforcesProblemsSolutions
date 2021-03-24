#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,k,count=0;
    cin>>i>>j>>k;
    for(int p=i;p<=j;p++)
    {
        string s=to_string(p);
        reverse(s.begin(),s.end());
        int t =abs(p-stoi(s));
        if(t%k==0)
        count++;
    }
    cout<<count;
    return 0;
}