#include <iostream>

using namespace std;


//                                         Iterative function
int factorial(int x){
    int ans=1;
    for(int i=1; i<=x; i++){
        ans+=i;
    }
    return ans;
}

//                                       Recursive function
// int factorial(long long x){
//     if(x==1) return 1;
//     return x*factorial(x-1);
// }

int main(){
    long long a=factorial(84);
    cout<<a;
}