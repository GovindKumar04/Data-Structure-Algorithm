#include <iostream>

using namespace std;

int sum(int n, int s){
    if(n<=0) return s;
    
    cout<<s<<endl;
    sum(n-1,s+n);
    
}
int main(){
    cout<<sum(4,0);
    return 0;
}