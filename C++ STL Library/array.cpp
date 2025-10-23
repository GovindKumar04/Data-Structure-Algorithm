#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    array<int, 5> a = {2, 43, 45, 98, 89};
    a.at(1) = 99;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
    cout << "Use of at " << a.at(2) << endl;
    cout << "Use of empty " << a.empty() << endl;
    cout << "Use of front " << a.front() << endl;
    cout << "Use of back " << a.back() << endl;
    a.at(1) = 99;
    cout << a.at(1);
    return 0;
}
