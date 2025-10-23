#include <iostream>

using namespace std;

void print1ToN(int i,int n){
    
    if(i>n){
        return;
    }
    cout<<i<<endl;
    i++;
    print1ToN(i,n);

}

int main(){
    print1ToN(1,5);
}