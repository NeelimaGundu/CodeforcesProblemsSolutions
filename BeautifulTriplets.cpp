#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int *a=new int[n],count=0,flag=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(count==0)
            {
                if(a[j]==a[i]+d)
                count++;
            }
            else if(count==1)
            {
                if(a[j]==a[i]+2*d)
                {
                flag++;
                break;
                }
            }
            else continue;
        }
        count=0;
    }
    cout<<flag;
    return 0;
}