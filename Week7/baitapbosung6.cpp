#include <iostream>
#include<map>

using namespace std;

map<string, int> m;

void process() {
    int type;
    cin >> type;
    string name;
    switch(type) {
        case 1:
        
        int y;
        cin >> name >> y;
        if (m.find(name) != m.end()) m[name] += y;
        else m.insert(make_pair(name,y));
        break;
        case 2:
       
        cin >> name;
        m.erase(name);
        break;
        case 3:
        
        cin >> name;
        if (m.find(name) == m.end()) cout << 0 << endl;
        else cout << m[name] << endl;
        break;
        
    }
}

int main()
{
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) process();
    
    return 0;
}
