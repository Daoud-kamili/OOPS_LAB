#include<iostream>
using namespace std;
class INT{
	public:
		int a;
		INT(int a1):a(a1){}
		INT operator-( const INT& other)
		{
			return INT(a-other.a);
		}
		INT operator+( const INT& other)
		{
			return INT(a+other.a);
		}
		INT operator*( const INT& other)
		{
			return INT(a*other.a);
		}
		INT operator/( const INT& other)
		{
			return INT(a/other.a);
		}
		void display()
		{
			cout<<a<<endl;
		}
};
int main()
{

INT c(10);
INT r1=c-INT(20);
r1.display();
INT r2=c+INT(20);
r2.display();
INT r3=c*INT(20);
r3.display();
INT r4=c/INT(20);
r4.display();

}