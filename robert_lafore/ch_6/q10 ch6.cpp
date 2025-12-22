#include<iostream>
using namespace std;
class ship{
	public:
	static int count;
	int num;
	int deg;
	float min;
	char dir;
	public:
		 ship()
		{
		num=++count;	
		}
		void get_pos(int i)
		{
			cout<<"enter position of ship"<<i+1<<endl;
			cin>>deg>>min>>dir;
			
		}
		void disp()
		{
			cout<<deg<<" "<<min<<" "<<dir<<endl;
		}
		
};int ship ::count =0;

int main()
{
	ship s[3];
	cout<<"enter ship details :- "<<endl;
	for(int i=0;i<3;i++)
	{
		s[i].get_pos(i);
	}
	cout<<"ship details are :- "<<endl;
	for(int i=0;i<3;i++)
	{
		s[i].disp();
	}
	
	
}