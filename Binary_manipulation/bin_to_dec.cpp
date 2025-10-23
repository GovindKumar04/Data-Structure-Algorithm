#include <iostream>
#include <cmath>

using namespace std;

int d,i=0,ans;
void func(uint32_t n){
    while(n!=0){
        d = n%10;
        if(d==1){
            ans= ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
   cout<<ans;
}

int main(){
    int n;
    cout<<"Enter the binary number that you want to change to decimal";
    cin>>n;
    func(n);
    return 0;
}