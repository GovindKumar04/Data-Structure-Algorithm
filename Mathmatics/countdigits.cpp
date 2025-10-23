#include <iostream>

using namespace std;

int countDigits(int x){
    int count=0;
    while(x>0){
        x/=10;
        count++;
    }
    return count;
}

int main(){
    int a= countDigits(453689);
    cout<<a;
}
