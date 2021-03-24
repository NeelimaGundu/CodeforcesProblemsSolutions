#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int w;
    float b;
    cin>>w>>b;
    if((w%5==0)&&(w<=b-0.50)&&(b>0)&&(w>0))
    {
        b=b-w-0.50;
    }
    cout<<fixed<<setprecision(2)<<b;
    
    return 0;
}
