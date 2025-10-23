#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> a;
    a.push_back(1);
    a.push_front(9);
    a.push_back(8);
    a.push_front(3);
    a.push_back(6);

    for (int d : a)
    {
        cout << d << " ";
    }
    cout<<endl;
    a.pop_back();
    a.pop_front();
    a.empty(); //empty or not
    a.erase(a.begin(),a.begin()+1); //erase from this range
    for (int d : a)
    {
        cout << d << " ";
    }
    cout << endl;
    return 0;
}