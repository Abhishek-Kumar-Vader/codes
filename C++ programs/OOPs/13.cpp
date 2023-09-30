#include<bits/stdc++.h>
using namespace std;

class comp{
    int a,b;
    public:
        comp(int x, int y=9){// default paramertirzed constructor 
             a=x;
             b=y;
        }

        void print(){
            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};



int main()
{
    comp a(4,6);
    a.print();

    comp b(5);
    b.print();
    return 0;
}