
#include<iostream>
using namespace std;
class complex 
{
    private:
    float real;
    float imag;
    public:
    complex()
    {
        real=0;
        imag=0;

    }
    complex (float r,float i)
    {
        real=r;
        imag=i;

    }
    ~complex()            
    {

    }
    void display(void)
    {
        cout<<real<<"+"<<imag<<"i"<<endl;

    }
    complex add (complex c)
    {
        float r=real+c.real;
        float i=imag+c.imag;
        return complex(r,i);

    }
};
int main()
{
    complex c1(2,3);
    cout<<"complex no is "<<endl;
    c1.display();
    complex c2(5,7);
    cout<<"complex no is"<<endl;
    c2. display();
    complex sum=c1.add(c2);
    cout<<"sum of complex no.is"<<endl;
   sum.display();
    return(0);

}
PS D:\harshada> cd "d:\harshada\" ; if ($?) { g++ complex.cpp -o complex } ; if ($?) { .\complex }
complex no is 
2+3i
complex no is
5+7i
sum of complex no.is
