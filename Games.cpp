#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int *u=new int[2*n];
    for(int i=0;i<2*n;i++)
    cin>>u[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;2*j+1<2*n;j++)
        {
            if(2*i+1==2*j+1)
            continue;
            if(u[2*i]==u[(2*j)+1])
            {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}