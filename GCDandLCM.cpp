#include<iostream>
using namespace std;
int gcd(int,int);
int gcd(int a, int b)
{
    if(a==0)
    return b;
    if(b==0)
    return a;
    if(a==b)
    return a;
    if(a>b)
    return gcd(a-b,b);
    return gcd(a,b-a);
}
int main()
{
    int t;
    cin>>t;
    int *a=new int[2*t];
    for(int i=0;i<2*t;i++)
    cin>>a[i];
    for(int i=0;i<t;i++)
    {
        long int c,b;
        c=a[2*i];
        b=a[2*i+1];
        cout<<gcd(c,b)<<" ";
        cout<<c*(b/gcd(c,b))<<endl;
    }
    return 0;

}