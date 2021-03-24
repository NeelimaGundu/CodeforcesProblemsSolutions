#include<iostream>
using namespace std;
int main()
{
    int t,k,count=0;
    cin>>t;
    long int *n=new long int[t], p;
    for(int i=0;i<t;i++)
    cin>>n[i];
    for(int i=0;i<t;i++)
    {
        p=n[i];
        count=0;
        while(p>0)
        {
            k=p%10;
            if(k==0)
            {
                p=p/10;
                continue;
            }
            if(n[i]%k==0)
            count++;
            p=p/10;
        }
        cout<<count<<endl;
    }
    return 0;
}