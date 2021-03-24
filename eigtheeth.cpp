#include <iostream>

using namespace std;

class static_test
{
    int x;
    public:
    static int a;
    static_test()
    {
        cout<<"Object: "<<a<<endl;
        a++;
    }
    void display();
};

int static_test :: a=1; 

void static_test :: display()
{
    cout<<a;
}

int main()
{
    static_test o1,o2,o3;
    o3.display();
    return 0;
}

