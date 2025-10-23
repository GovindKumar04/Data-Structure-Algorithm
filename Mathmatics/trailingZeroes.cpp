#include <iostream>

using namespace std;

int factorial(int x){
    if(x==1) return 1;
    return x*factorial(x-1);
}
int trailingZeroes(int x){
    int a=factorial(x);
    int count=0,d;
    while(a>0){
        d=a%10;
        if(d==0){
            count++;
        }
        a/=10;
        
    }
    return count;
}

int main(){
    int a=trailingZeroes(10);
    cout<<a;
}