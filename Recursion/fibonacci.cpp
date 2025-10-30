#include <iostream>

using namespace std;

int  fibonacci(int n){
    return n<=1 ? n: fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    cout << fibonacci(5);
    return 0;
}