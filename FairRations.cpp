#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>m;
    int *b=new int[n];
    for(int i=0;i<n;i++)
    cin>>b[i];
    for(int i=0;i<n;i++)
    {
        if(b[i]%2!=0)&&(b[i+1]%2!=0)&&(b[i-1]%2!=0)
        b[i]++;

    }
    return 0;
}