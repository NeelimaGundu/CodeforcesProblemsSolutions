#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int *a=new int[t];
    for(int i=0;i<t;i++)
    {
        int n,c,m,left=0,wraps=0;
        cin>>n>>c>>m;
        int choci=0;
        choci=n/c;
        wraps=choci;
        while(wraps!=1)
        {
            if(wraps<m)
            break;
            left=wraps/m;
            choci+=left;
            wraps=wraps-left*m;
            wraps+=left;
        }
        a[i]=choci;
    }
    for(int i=0;i<t;i++)
    cout<<a[i]<<endl;
    return 0;
}