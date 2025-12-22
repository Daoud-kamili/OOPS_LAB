#include<iostream>
using namespace std;
class counter{
	static int count;
	int serial; 
	public:
	counter()
	{
		serial=++count;
	}
	void disp_ser()
	{
		cout<<"i am object no.:- "<<serial<<endl;
	}
	
	
};
int counter::count = 0;



int main()
{
	counter o1,o2,o3;
	o1.disp_ser();
	o2.disp_ser();
	o3.disp_ser();
}