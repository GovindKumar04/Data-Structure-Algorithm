#include <iostream>

using namespace std;

int lcm(int a,int b){
    int max=0;
    int n=a*b;
    int m;
    if(a<b) m=a;
    else m=b;
    for(int i=m; i<=n; i++){
        if(i%a==0 && i%b==0){
            max=i;
            break;
        }
    }
    return max;
}

int main(){
    int a=lcm(4,6);
    cout<<a;
    return 0;
}