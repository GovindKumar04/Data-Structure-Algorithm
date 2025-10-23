#include <iostream>
using namespace std;

int fun(int n){
    if(n>3) return n;
    fun(n+1);
    cout<<n;
    return n;

}

int main(){
    int a=fun(1);
    cout<<endl;
    cout<<a;
    return 0;
}