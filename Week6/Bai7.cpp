#include <iostream>
#include<string>

using namespace std;

class Employee {
private:
    string name;
    int yoj;
    int salary;
    string address;
public:
    Employee(string name, int yoj, string address) {
        this->yoj = yoj;
        this->name = name;
        this->address = address;
    }
    
    void print() {
        cout << name << "    " << yoj << "   " << address << endl; 
    }

};

int main()
{
    for (int i = 0; i < 3; i++) {
        string name;
        int yoj;
        string address;
        getline(cin,name);
        cin >> yoj;
        cin.ignore();
        getline(cin, address);
        Employee e(name,yoj,address);
        e.print();
    }

    return 0;
}
