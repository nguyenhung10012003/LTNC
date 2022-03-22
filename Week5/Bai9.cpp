#include <iostream>
#include<vector>
#include<string>

using namespace std;

class employ {
private:
    string name;
    int salary, increaseSalary;
    int hour;

public:
    employ(string name, int salary, int hour) {
        this->name = name;
        this->salary = salary;
        this->hour = hour;
        if (hour <= 9) increaseSalary = 50;
        if (hour == 10 || hour == 11) increaseSalary = 100;
        if (hour >= 12) increaseSalary = 150;
    }

    int getFinalSalary() {
        return salary + increaseSalary;
    }

    string getName() {
        return name;
    }

    void print() {
        cout << "Name: " << name << ".Final salary: " << salary + increaseSalary << endl;
    }

};

int main()
{

    for (int i = 0; i < 10; i++) {
        string name;
        int hour, salary;
        getline(cin, name);
        cin >> salary >> hour;
        employ newEmploy(name, salary, hour);
        newEmploy.print();
        cin.ignore();
    }

    return 0;
}
