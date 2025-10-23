#include <iostream>
#include <cmath>

using namespace std;


int b,i=0,arr[10];

//                                             1st METHOD
void func1(int n){
    while(n!=0){
        b=n%2;
        arr[i]=b;
        n=n/2;
        i++;
    }
      
}

//                                           2nd METHOD
void func2(int n){
    while(n!=0){
        b= n&1;
        arr[i]=b;
        n=(n>>1);
        i++;
    }
     
}


//                                             3rd METHOD

void func3(int n){
    int ans=0;
    while(n!=0){
        b = n&1;
        n=n>>1;
        //   formula for bit in reverse flow
        // ans = pow(10,i)*b+ans;
        // formula for bit in same flow
        ans = ans*10+b;
        i++;
    }
    cout<<ans;
}


int main(){
    int n;
    cout<<"Enter the number that you want to change to binary\t";
    cin>>n;
    // func1(n);
    func3(n);
    // for(int j=i-1; j>=0; j--){
    //     cout<<arr[j];
    // }
    return 0;
}