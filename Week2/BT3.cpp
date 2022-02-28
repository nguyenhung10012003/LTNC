#include<iostream>
#include<cmath>

using namespace std;

int main() {
    
    int lowBound, upperBound;
    cin >> lowBound >> upperBound;
    int i = ceil(sqrt(lowBound));
    for (; i*i <= upperBound; i++) {
        
        cout << i*i << " ";
    }
    
    return 0;
}