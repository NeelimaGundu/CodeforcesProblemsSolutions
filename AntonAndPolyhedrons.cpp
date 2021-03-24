#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,faces=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s=="Tetrahedron")
        faces+=4;
        else if(s=="Cube")
        faces+=6;
        else if(s=="Octahedron")
        faces+=8;
        else if(s=="Icosahedron")
        faces+=20;
        else
        faces+=12;
    }
    cout<<faces;
    return 0;
}