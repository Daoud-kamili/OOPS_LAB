#include<iostream>
using namespace std;
class time{
	public:
		int hrs,min, sec;
		time()
		{
			hrs=min=sec=0;
		}
		time(int h,int m,int s):hrs(h),min(m),sec(s){}
		void disp() const
		{
			cout<<hrs<< ":"<<min<< ":"<<sec<<endl;
		}
		
		void add(time t1,time t2)
		{
			sec= t1.sec+t2.sec;
			min=t1.min+t2.min;
			hrs=t1.hrs+t2.hrs;
			if(sec>=60)
			{
				sec-=60;
				min++;
			}
			if(min>=60)
			{
				min-=60;
				hrs++;
			}
		}
		
};
int main()
{
	const time t1(7,59,30);
	const time t2(8,29,30);
	t1.disp();
	t2.disp();
	time result;
	time t3;
	t3.add(t1,t2);
	t3.disp();
}