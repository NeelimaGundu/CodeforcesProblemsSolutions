#include<iostream>
using namespace std;
int main()
{
    int n,k,e=100;
    cin>>n>>k;
    int *c=new int[n];
    for(int i=0;i<n;i++)
    cin>>c[i];
    int i=0;
    while((i+k)%n<n)
    {
        if((i==0)&&(e<100))
        {
            if(c[0]==1)
            e=e-2;
            e--;
            break;
        }
        if(i==n-1)
        {
            if(c[0]==1)
            e=e-2;
            break;
        }
        if(c[(i+k)%n]==1)
        e=e-2;
        e--;
        i=(i+k)%n;
    }
    cout<<e;
    return 0;
}