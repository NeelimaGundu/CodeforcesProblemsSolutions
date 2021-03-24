#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long double *a=new long double[t];
    for(int i=0;i<t;i++)
    {
        long double s;
        cin>>s;
        if(s<1500)
        {
            a[i]=s+ s/10 + 0.9*s;
        }
        else
        {
            a[i]=s+500+ 0.98*s;
        }
    }
    for(int i=0;i<t;i++)
    cout<<fixed<<setprecision(2)<<a[i]<<endl;
    return 0;
}