#include<iostream>
using namespace std;
int main()
{
    int fine=0;
    int d1,m1,y1;
    cin>>d1>>m1>>y1;
    int d2,m2,y2;
    cin>>d2>>m2>>y2;
    if(y1<y2)
    fine=0;
    else if((m1<m2)&&(y1==y2))
    fine=0;
    else if((d1<=d2)&&(m1==m2)&&(y1==y2))
    fine=0;
    else if((d1>d2)&&(m1==m2)&&(y1==y2))
    fine = (d1-d2)*15;
    else if((m1>m2)&&(y1==y2))
    fine = (m1-m2)*500;
    else 
    fine = 10000;
    cout<<fine;
    return 0;
}