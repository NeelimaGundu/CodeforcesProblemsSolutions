#include<iostream>
using namespace std;
int main()
{
    int n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    a[i]=0;
    cin>>n;
    int x,y;
    cin>>x;
    int *xl=new int[x];
    for(int i=0;i<x;i++)
    {
        cin>>xl[i];
        if(a[xl[i]-1]==0)
        a[xl[i]-1]=1;
    }
    cin>>y;
    int *yl=new int[y];
    for(int i=0;i<y;i++)
    {
        cin>>yl[i];
        if(a[yl[i]-1]==0)
        a[yl[i]-1]=1;
    }
    int check=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            check=1;
            break;
        }
    }
    if(check==0)
    cout<<"I become the guy.";
    else
    cout<<"Oh, my keyboard!";
    return 0;
}