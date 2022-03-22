#include<iostream>
#include<vector>
#include<iomanip>
#include<string>


using namespace std;

class Student {
private:
	string name;
	string address;
	int age, no;
	int marks;

public:
	
	Student(int no, string name, string address, int age, int marks) {
		this->no = no;
		this->name = name;
		this->address = address;
		this->age = age;
		this->marks = marks;
	}

	void print() {
		cout << no << ". Name: " << name << ", age:" << age << ", marks: " << marks << endl;

	}
	void setInformation(int no, string name, string address, int age, int marks) {
		this->no = no;
		this->name = name;
		this->address = address;
		this->age = age;
		this->marks = marks;
	}

	int getNo() {
		return no;
	}

	int getAge() {
		return age;
	}

	string getName() {
		return name;
	}

};

void print1(vector<Student> s) {
	for (auto c : s) {
		if (c.getAge() == 14) cout << c.getName() << endl;
	}
}

void print2(vector<Student> s) {
	for (auto c : s) {
		if (c.getNo() % 2 == 0) cout << c.getName() << endl;
	}
}

void print3(vector<Student> s) {
	int no;
	cout << "Enterd roll: ";
	cin >> no;
	s[no - 1].print();
}

int main() {

	int n;
	cin >> n;
	vector<Student> s;
	for (int i = 0; i < n; i++) {
		string name, address;
		int age, marks;
		cin.ignore();
		getline(cin, name);
		cin.ignore();
		getline(cin, address);
		cin >> age >> marks;
		Student newStu(i + 1, name, address, age, marks);
		s.push_back(newStu);
		
	}

	print1(s);
	cout << "----------------------------" << endl;
	print2(s);
	cout << "----------------------------" << endl;
	print3(s);
	cout << "----------------------------" << endl;

	return 0;
}