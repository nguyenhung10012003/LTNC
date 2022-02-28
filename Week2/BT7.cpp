#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    int x;
    cin >> x;
    double sum = 1, oldSum = 0;
    long long i = 1;
    double t = x / i;
    
    while (sum - oldSum > 0.001) {
        oldSum = sum;
        sum = sum + t;
        i++;
        t = t * (double)x / i;
    }
    
    cout << fixed << setprecision(4) <<  sum;

    return 0;
}