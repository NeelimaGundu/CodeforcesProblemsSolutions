#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int *ans=new int[t];
    for(int i=0;i<t;i++)
    {
        string a,b;
        cin>>a>>b;
        int ia=stoi(a),ib=stoi(b),is;
        while(ia%10==0)
        {
            ia=ia/10;
        }
        while(ib%10==0)
        {
            ib=ib/10;
        }
        a=to_string(ia);
        b=to_string(ib);
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string s=to_string(stoi(a)+stoi(b));
        is=stoi(s);
        while(is%10==0)
        {
            is=is/10;
        }
        s=to_string(is);
        reverse(s.begin(),s.end());
        int p=stoi(s);
        ans[i]=p;
    }
    for(int i=0;i<t;i++)
    cout<<ans[i]<<endl;
    return 0;
}