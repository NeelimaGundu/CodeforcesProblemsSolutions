#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *p=new int[n];
    double ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        ans+=float(p[i])/100;
    }
    ans=(ans/n)*100;
    cout<<fixed<<setprecision(7)<<ans;
    return 0;
}