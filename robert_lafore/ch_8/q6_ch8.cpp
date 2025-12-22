#include<iostream>
using namespace std;

class time {
public:
    int hrs, min, sec;

    time() {
        hrs = min = sec = 0;
    }

    time(int h, int m, int s) : hrs(h), min(m), sec(s) {}

    void disp() const {
        cout << hrs << ":" << min << ":" << sec << endl;
    }

    // correct operator-
    time operator-(time t) {
        time temp;

        temp.sec = sec - t.sec;
        temp.min = min - t.min;
        temp.hrs = hrs - t.hrs;

        if (temp.sec < 0) {
            temp.sec += 60;
            temp.min--;
        }

        if (temp.min < 0) {
            temp.min += 60;
            temp.hrs--;
        }
        if(temp.hrs<0)
        {
        	temp.hrs=-1*temp.hrs;
		}

        return temp;  
    }
    time operator*(int c)
    {
		time temp_2;
    	temp_2.sec=sec*c;
    	temp_2.min=min*c;
    	temp_2.hrs=hrs*c;
    	return temp_2;
	}
};

int main() {
	
    time t1(7, 59, 30);
    time t2(8, 29, 30);

    t1.disp();
    t2.disp();

    time t3 = t1 - t2;  

    t3.disp();  
    float z=0;
    	cout<<"\nenter the float number for multipplication:- ";
    	cin>>z;
    time t4=t3*z;
    t4.disp();

}
