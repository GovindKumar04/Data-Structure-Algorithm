#include <iostream>

using namespace std;

int c=0;

// This in expample of infinte recursion where there no end 
void count(){
    cout<<c<<endl;
    c++;
    count();
}
int main(){
    count();
    return 0;
}