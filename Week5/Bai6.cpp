#include<iostream>
#include<vector>
#include<iomanip>
#include<string>


using namespace std;

class complex {
private:
	int real, img;

public:
	complex() {
		real = 0;
		img = 0;
	}

	complex(int real, int img) {
		this->real = real;
		this->img = img;
	}

	void printNumber() {
		cout << real << " + " << img << "!";
	}

	complex operator+(const complex& a) {
		complex c(a.real + real, a.img + img);
		return c;
	}

	complex operator-(const complex& a) {
		complex c(real - a.real, img - a.img);
		return c;
	}

	complex operator*(const complex& a) {
		complex c(real * a.real + img * a.img, a.real * img + a.img * real);
		return c;
	}
	
	friend ostream& operator<<(ostream& os, const complex &a) {
		os << a.real << " + " << a.img << "!";
		return os;
	}

};

int main() {

	int real, img;
	cin >> real >> img;
	complex a(real, img);
	cin >> real >> img;
	complex b(real, img);
	cout << a + b;

	return 0;
}