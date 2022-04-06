#include <iostream>

using namespace std;

void update(int *a, int *b) {
    int t = *a + *b;
    int h = *a - *b;
    *a = t;
    *b = (h > 0 ? h : -h);
}

int main()
{
    int a;
    int b;
    cin >> a >> b;
    update(&a,&b);
    cout << a << " " << b;

    return 0;
}
