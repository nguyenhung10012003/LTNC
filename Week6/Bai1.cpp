#include <iostream>
#include<deque> 
#include<vector>

using namespace std;

int main()
{
    deque<int> dq;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) dq.push_back(i+1);
    for (int i = 0; i < k; i++) {
        int t = dq.front();
        dq.pop_front();
        dq.push_back(t);
    }
    
    vector<int> a(dq.begin(),dq.end());
    for (int i = 0; i < n; i++) cout << a[i] << " ";

    return 0;
}
