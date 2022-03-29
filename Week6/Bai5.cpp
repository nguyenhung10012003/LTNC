#include <iostream>

using namespace std;

class Area {
private:
    double length, breadth;
public:
    
    Area(double length, double breadth) {
        this->length = length;
        this->breadth = breadth;
    }
    
    double returnArea() {
        return length*breadth;
    }
    
};

int main()
{
    double a,b;
    cin >> a >> b;
    Area rec(a,b);
    cout << rec.returnArea();

    return 0;
}
