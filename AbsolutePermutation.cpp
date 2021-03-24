#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int *nk=new int[2*t];
    for(int i=0;i<2*t;i++)
    cin>>nk[i];
    for(int i=0;(2*i)+1<2*t;i++)
    {
        int n,k;
        n=nk[2*i];
        k=nk[(2*i)+1];
        int *pos=new int[n];
        if(k==0)
        {
            for(int p=0;p<n;p++)
            {
                pos[p]=p+1;
                cout<<pos[p]<<" ";
            }
        }
        else if(fmod((float(n)/float(k)),2)!=0.0)
        {
            cout<<-1;
        }
        else
        {

            for(int p=1;p<n;p=p+2*k)
            {
                for(int q=p;q<p+2*k;q++)
                {
                    pos[q-1]=q;
                }
                for(int f=p;f<(p+k);f++)
                swap(pos[f-1+k],pos[f-1]);
            }
            for(int v=0;v<n;v++)
            cout<<pos[v]<<" ";
        }
        cout<<endl;
    }
    return 0;
}