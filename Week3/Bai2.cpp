#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

bool comp(float a, float b) {
	return (a > b);
}

int main() {

	int n;
	cin >> n;
	vector<float> arr(n);

	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr.begin(), arr.end(), comp);
	for (int i = 0; i < n; i++) cout << fixed << setprecision(2) << arr[i] << " ";

	return 0;
}