#include <iostream>

using namespace std;

int gcd(int a,int b){
    int max=0;
    int n=0;
    if(a>b){
        n=a;
    } 
    else{
        n=b;
    } 
    for(int i=2; i<=n; i++){
        if(a%i==0 && b%i==0){
            max=i;
        }
    }
    return max;
}

int main(){
    int a=gcd(36,60);
    cout<<a;
    return 0;
}
