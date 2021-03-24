#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cin>>l>>b;
    int area,peri;
    area=l*b;
    peri=2*(l+b);
    if(area>peri)
    cout<<"Area"<<endl<<area;
    else if(peri>area)
    cout<<"Peri"<<endl<<peri;
    else
    cout<<"Eq"<<endl<<area;
    return 0;
}