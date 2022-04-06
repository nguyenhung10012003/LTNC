#include<iostream>
#include<set>

using namespace std;

set<int> se;

void process() {
    int x, type;
    cin >> type >> x;
    switch(type) {
        case 1: se.insert(x); break;
        case 2: se.erase(x); break;
        case 3: if (se.find(x) != se.end()) cout << "Yes" << endl;
                else cout << "No" << endl;
                break;
    }
    
}

int main() {
    
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) process();
    
    return 0;
}
