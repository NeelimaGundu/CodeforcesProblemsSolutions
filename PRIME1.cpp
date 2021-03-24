#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int t,count=0,s=0,b=0;
    cin>>t;
    int *p=new int[t];
    long int a1[100000];
    while(t>0)
    {
        long int m,n,check=0;
        cin>>m>>n;
        if(m==1)
        m++;
        for(int i=m;i<=n;i++)
        {
            for(int j=2;j<=i/2;j++)
            {
                if(i%j==0)
                { 
                    check=1;
                    break;
                }
            }
            if(check!=1)
            {
                a1[count]=i;
                count++;
            }
            check=0;
        }
        p[s]=count;
        t--;
        s++;
    }
    for(int k=0;k<count;k++)
    {
        if(k==p[b])
        {
            cout<<endl<<a1[k]<<endl;
            b++;
        }
        else
        {
            cout<<a1[k]<<endl;
        }
    }
    return 0;
}