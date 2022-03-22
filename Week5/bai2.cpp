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

void process(int no) {
	string name;
	int age, marks;
	getline(cin, name);
	cin >> age >> marks;
	Student newStu(no, name, age, marks);
	newStu.print();
}

int main() {

	for (int i = 0; i < 5; i++) {
		process(i + 1);
		cin.ignore();
	}

	return 0;
}