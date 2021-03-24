#include<iostream>
using namespace std;
int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    if((k==1)||(l==1)||(m==1)||(n==1))
    cout<<d;
    else
    {
        int dmgd=0;
        dmgd=d/k + d/l + d/m + d/n;
        dmgd=dmgd -d/(k*l) -d/(l*m) -d/(k*m) -d/(l*n) - d/(m*n) -d/(k*n) + d/(k*l*m) + d/(k*m*n) + d/(l*m*n) + d/(k*l*n) - d/(k*l*m*n);
        cout<<dmgd;
    }
    return 0;
}