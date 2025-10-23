#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    cout << a.capacity() << endl;
    a.push_back(1);
    cout << a.capacity() << endl;
    a.push_back(9);
    cout << a.capacity() << endl;
    a.push_back(7);
    cout << a.capacity() << endl;

    vector<int> b(4, 8);
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    // b.pop_back();
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }

    cout << "M vector ";
    vector<int> m(b);
    for (int i = 0; i < b.size(); i++)
    {
        cout << m[i] << " ";
    }
    m.clear();
    cout <<"size"<< m.size() << endl;
    cout <<"capacity"<< m.capacity() << endl;
    m.shrink_to_fit();
    cout << m.capacity() << endl;

    return 0;
}