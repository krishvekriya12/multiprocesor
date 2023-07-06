#include<iostream>
#include<string.h>
using namespace std;

class tapu{
	public :
		void info()
		{
			cout<<"how are you sonu ?"<<endl;
		}
		
};
class sonu : public tapu
{
	public :
		void info()
		{
			cout<<"i am fine..$"<<endl;
		}
};
int main()
{
	sonu o1;
	 o1.tapu::info();
	 o1.info();
}
