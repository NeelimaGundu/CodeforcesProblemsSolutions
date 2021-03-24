#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a=new int[n],count=n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n,greater<int>());
    cout<<count<<endl;
    while(count!=0)
    {
        for(int i=0;i<count;i++)
        {
        a[i]=a[i]-a[count-1];
        if(a[i]==0)
        {
            count=i;
            break;
        }
        }
        if(count==0)
        break;
        cout<<count<<endl;
    }
    return 0;
}