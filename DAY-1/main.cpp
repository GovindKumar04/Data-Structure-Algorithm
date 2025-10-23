#include <iostream>
using namespace std;
int glo = 6;

void sum(){
    int a = 5;
    cout << a<< "and" << glo,"\n";
}

int main() {
    int num;
    int glo = 9;
    cout << "WRITE A NUM\n"<< glo<<"\n";
    float pi= 3.14;
    double deci = 3.74568569875;
    // we can only assign char in single quote;
    char t = 't';
    bool is_true = true;
    sum();
    cin >> num ;
    cout << num;
    return 0;
}