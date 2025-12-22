#include <iostream>
using namespace std;

class date {
private:
    int month, day, year;

public:
    void getdate() {
        char slash;   // to read '/'
        cout << "Enter date (mm/dd/yy): ";
        cin >> month >> slash >> day >> slash >> year;
    }

    void showdate() {
        cout << month << "/" << day << "/" << year;
    }
};

int main() {
    date d;

    d.getdate();

    cout << "The date you entered is: ";
    d.showdate();

    return 0;
}
