#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int *p=new int[t];
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        int l=s.length();
        int n =stoi(s);
        int k=0;
        k+=n%10;
        k+=n/pow(10,l-1);
        p[i]=k;
    }
    for(int i=0;i<t;i++)
    cout<<p[i]<<endl;
    return 0;
}