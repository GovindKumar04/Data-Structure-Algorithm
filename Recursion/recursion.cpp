#include <iostream>

using namespace std;
int rec(int n){
    if(n==0) return 0;
    return n+rec(n-1);
}
int main(){
    int a=rec(3);
    cout<<a;
    return 0;
}
// 5+(4);
// 4+3
// 3+2
// 2+1
// 1+0
