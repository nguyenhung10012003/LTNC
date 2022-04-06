#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int k, a, b;
    cin >> k >> a >> b;
    arr.erase(arr.begin() + k - 1);
    arr.erase(arr.begin() + a - 1, arr.begin() + b - 1);
    for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";

    return 0;
}
