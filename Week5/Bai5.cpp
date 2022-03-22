#include<iostream>
#include<vector>
#include<iomanip>
#include<string>


using namespace std;

class Marks {
private:
	string name;
	int no;
	vector<double> marks;

public:
	Marks() {}
	Marks(int no, string name, int math, int chem, int phy) {
		this->no = no;
		this->name = name;
		marks.push_back(math);
		marks.push_back(chem);
		marks.push_back(phy);
	}

	void print() {
		cout << no << ". Name: " << name << endl;
		cout << "Math: " << marks[0] << ", Chemistry: " << marks[1] << ", Physic: " << marks[2] << endl;
		cout << "Average of marks: " << fixed << setprecision(2);
		cout << (marks[0] + marks[1] + marks[2]) / 3 << endl;

	}
	void setInformation(int no, string name, int age, int math, int chem, int phy) {
		this->no = no;
		this->name = name;
		marks.push_back(math);
		marks.push_back(chem);
		marks.push_back(phy);
	}
};
int main() {

	for (int i = 0; i < 5; i++) {
		string name;
		int math, chem, phy;
		getline(cin, name);
		cin >> math >> chem >> phy;
		Marks stu(i + 1, name, math,chem, phy);
		stu.print();
		cin.ignore();
	}

	return 0;
}
