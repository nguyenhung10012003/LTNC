#include <iostream>

using namespace std;

class Customer {
private:
    string name, acc_number;
    int balance;
public:
    Customer() {
        name = "None";
        acc_number = "None";
        balance = 0;
    }

    Customer(string name, string acc_number, int balance) {
        this->name = name;
        this->acc_number = acc_number;
        this->balance = balance;
    }

    void setInform(string name, string acc_number, int balance) {
        this->name = name;
        this->acc_number = acc_number;
        this->balance = balance;
    }

    int getBalance() {
        return balance;
    }

    string getName() {
        return name;
    }

    void print() {
        cout << "Name: " << name << ", Account number: " << acc_number << ", balance: " << balance << endl;
    }

    void addBalance(int amount) {
        this->balance += amount;
    }

};

void print1(Customer customers[], int n) {
    for (int i = 0; i < n; i++) {
        if (customers[i].getBalance() < 200) cout << customers[i].getName() << endl;
    }
}

void print2(Customer customers[], int n) {
    for (int i = 0; i < n; i++) {
        if (customers[i].getBalance() > 1000) {
            customers[i].addBalance(100);
            cout << customers[i].getName() << ".New balance: " << customers[i].getBalance() << endl;

        }
    }
}

int main()
{

    Customer customers[10];
    // make test
    Customer s("Nguyen van a", "345246830", 1200);
    customers[0] = s;
    Customer s1("Nguyen van b", "5326830", 200);
    customers[1] = s1;
    Customer s2("Nguyen a", "12472352", 100);
    customers[2] = s2;
    Customer s3("Nguyen thu c", "35534222", 150);
    customers[3] = s3;
    Customer s4("Tran thu", "4546830", 400);
    customers[4] = s4;
    //
    print1(customers, 5);
    cout << endl;
    print2(customers, 5);
    cout << endl;

    return 0;
}
