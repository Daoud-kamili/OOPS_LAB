#include <iostream>
using namespace std;

class employee {
private:
    int empno;
    float compensation;

public:
    void getdata() {
        cout << "Enter employee number: ";
        cin >> empno;

        cout << "Enter employee compensation: ";
        cin >> compensation;
    }

    void display()  {
        cout << "\nEmployee Number: " << empno;
        cout << "\nCompensation: " << compensation << endl;
    }
};

int main() {
    employee e[3];   
    cout << "Enter data for 3 employees:\n";
    for (int i = 0; i < 3; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        e[i].getdata();
    }
	cout << "\n--- Employee Details ---\n";
    for (int i = 0; i < 3; i++) {
        cout << "\nEmployee " << (i + 1) << ":";
        e[i].display();
    }

    return 0;
}
