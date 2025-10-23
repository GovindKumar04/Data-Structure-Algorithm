#include <iostream>

using namespace std;

void palindrome(int x){
    int d,b=x;
    long long a=0;
    while(x>0){
        d=x%10;
        a=(a*10)+d;
        x/=10;
    }
    if(b==a){
        cout<<"its palindrome"<<endl;
    }else{
        cout<<"its not palindrome"<<endl;
    }
}

int main(){
    palindrome(87878);
    palindrome(870878078);
}