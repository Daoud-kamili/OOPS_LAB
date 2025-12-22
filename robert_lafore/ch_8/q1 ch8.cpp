#include<iostream>
using namespace std;
class dist{
	public: 
	int d;
	dist():d(0){}
	void get_distt()
	{
		cout<<"enter distance :- "<<endl;
		cin>>d;
	}
	dist operator-(dist diff)
	{
		dist temp;
		temp.d=d-diff.d;
		return temp;
	}
};
int main()
{

dist d1,d2,d3;
d1.get_distt();
d2.get_distt();
if(d1.d>=d2.d)
{

d3=d1-d2;
cout<<d3.d;
}
else
{
	cout<<"not allowed";
}
/*if(d3.d>=0)
{
cout<<d3.d;
}
else
{
	cout<<-1*d3.d;
}*/
}