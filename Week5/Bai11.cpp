#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>

using namespace std;

class date {
private:
	int day, month, year;
	int dayMax[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

public:
	
	date() {
		time_t now = time(0);
		tm* ltm = localtime(&now);
		day = ltm->tm_mday;
		month = 1 + ltm->tm_mon;
		year = 1900 + ltm->tm_year;
		if (month == 2)
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) dayMax[1] = 29;
	}

	date(int day, int month, int year) {
		this->day = day;
		this->month = month;
		this->year = year;
		if (month == 2)
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) dayMax[1] = 29;
	}

	friend ostream& operator << (ostream& os, date d) {
		os << d.day << "/" << d.month << "/" << d.year;
		return os;
	}

	void add45day() {
		for (int i = 1; i <= 45; i++) {
			day++;
			if (day > dayMax[month - 1]) {
				day = 1;
				month++;
				if (month == 13) {
					month = 1;
					year++;
				}
			}
		}
	}

};


int main() {
	
	date d;
	d.add45day();
	cout << d;

	return 0;
}