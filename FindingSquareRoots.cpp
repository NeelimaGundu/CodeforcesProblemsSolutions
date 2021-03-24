#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int *a=new int[t];
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        a[i]=sqrt(n);
    }
    for(int i=0;i<t;i++)
    cout<<a[i]<<endl;
    return 0;
}