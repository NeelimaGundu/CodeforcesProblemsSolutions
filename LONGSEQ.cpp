#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string *a=new string[t];
    for(int i=0;i<t;i++)
    {
        int ones=0,zeroes=0;
        string s;
        cin>>s;
        int l=s.length();
        for(int j=0;j<l;j++)
        {
            if(s[j]=='1')
            ones++;
            else
            zeroes++;
        }
        if((ones==1)&&(zeroes=1))
        a[i]="Yes";
        else if(abs(ones-zeroes)==1)
        a[i]="Yes";
        else
        a[i]="No";
    }
    for(int i=0;i<t;i++)
    cout<<a[i]<<endl;
    return 0;
}