#include<iostream>
using namespace std;
int main()
{
    int n,k,sum=0,count=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        sum+=5*i;
        count++;
        if(sum>240-k)
        {
            count--;
            break;
        }
    }
    cout<<count;
    return 0;
}