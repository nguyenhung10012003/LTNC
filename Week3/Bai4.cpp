#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

int main() {

	int n;
	cin >> n;
	vector<float> arr(n);

	for (int i = 0; i < n; i++) cin >> arr[i];
	float k;
	cin >> k;

	arr.push_back(k);
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n + 1; i++) cout << fixed << setprecision(2) << arr[i] << " ";

	return 0;
}