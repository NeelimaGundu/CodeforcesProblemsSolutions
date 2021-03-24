#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string *a=new string[t];
    for(int i=0;i<t;i++)
    {
        int l[4];
        cin>>l[0]>>l[1]>>l[2]>>l[3];
        sort(l,l+4);
        if((l[0]==l[1])&&(l[2]==l[3]))
        a[i]="YES";
        else
        a[i]="NO";
    }
    for(int i=0;i<t;i++)
    cout<<a[i]<<endl;
    return 0;
}