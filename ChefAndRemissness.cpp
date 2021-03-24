#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int *a=new int[2*t];
    for(int i=0;i<2*t;i++)
    cin>>a[i];
    for(int i=0;i<t;i++)
    {
        int c,b;
        c=a[2*i];
        b=a[2*i+1];
        int min=c>b?c:b;
        cout<<min<<" "<<c+b<<endl;
    }
    return 0;
}