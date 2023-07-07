#include<iostream>
#include<string.h>
using namespace std;
class height
{
	int f,i;
	public :
		void read()
		{
			cout<<"enter feet and inch"<<endl;
			cin>>f>>i;
		}
		void print()
		{
			cout<<"feet="<<f<<endl<<"inch="<<i<<endl;
		}
		void convert()
		{
			if(i>=12)
			{
				f++;
				i=i-12;
			}
		}
		height  operator + (height h)
		{

		height t;
		t.f=f+h.f;
		t.i=i+h.i;
	}
};
int main()
{
	height h1,h2,h3;
	h1.read();
    h2.read();
    h3=h1+h2;
    h3.convert();
    h3.print();
    return 0;
    
}
