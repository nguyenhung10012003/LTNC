#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Student {
private:
	string name;
	int age, no;
	int marks;

public:
	Student() {}
	Student(int no, string name, int age, int marks) {
		this->no = no;
		this->name = name;
		this->age = age;
		this->marks = marks;
	}

	void print() {
		cout << no << ". Name: " << name << ", age:" << age << ", marks: " << marks << endl;

	}
	void setInformation(int no, string name, int age, int marks) {
		this->no = no;
		this->name = name;
		this->age = age;
		this->marks = marks;
	}

};

int main() {

	string name;
	int age, marks;
	getline(cin, name);
	cin >> age >> marks;
	Student newStu(1, name, age, marks);
	newStu.print();

	return 0;
}