#include<iostream>
using namespace std;
class arithmatic{
    int a,b;
    public:
       void setab(int x, int y){
           a=x;b=y;
       }
       int geta(void){
           return a;
       }
       int getb(void){
           return b;
       }
       void display(void);
};
void arithmatic :: display(void)
{
    cout<<"a ="<<a;
    cout<<"b ="<<b;
}
class smthng : private arithmatic
{
    int c;
    public :
      void add();
      void mul();
      void sub();
      void div();
};
void smthng :: add()
{
    c = 
    cout<<"addition = "<<c;

}
void smthng :: mul()
{
    c = 
    cout<<"multiplication = "<<c;
}
void smthng :: sub()
{
    c =
    cout<<"sub = "<<c;
}
void smthng :: div()
{
    c = geta()/getb();
    cout<<"div = "<<c;
}
int main()
{
    int x,y;
    cout<<"enter a,b";
    cin>>x>>y;
    arithmatic obj;
    obj.setab(x,y);
    obj.display();
    smthng op;
    op.add();
    op.mul();
    op.sub();
    op.div();
    return 0;
}