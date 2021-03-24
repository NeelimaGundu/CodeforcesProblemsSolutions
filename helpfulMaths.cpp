#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int n=l-l/2;
    int *a= new int[n];
    for(int i=0;2*i<l;i++)
    {
        a[i]=0;
        string st=s.substr(2*i);
        a[i]= stoi(st);
    }
    sort(a,a+n);
    for(int k=0;k<n;k++)
    {    
        if(k==n-1)
        cout<<a[k];
        else cout<<a[k]<<"+";
    }
    return 0;
}