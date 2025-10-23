#include <iostream>
using namespace std;

int main(){
    int a=4;
    int b=5;
//Or operator can take the value  in binary digit and check that if one of its input is 1 then it returns 1 as output, and then the value of after this calculation is the final result. 
    cout<<"a|b "<< (a|b)<<endl;
//Not operation take the 2s compliment of that number
    cout<<"~ "<< ~a<<endl;
//And operation can take two input and check if both its input is 1 then it returns 1 otherwise returns 0.
    cout<<"a&b "<< (a & b)<<endl;
//XOR operation can take two input and check if one its input is 1 then it returns 1 otherwise returns 0.
    cout<<"a^b "<< (a^b)<<endl;
// left shift operator
int l=5<<2;
    cout<<"Right shift :"<<(l)<<endl;
// right shift operator
    cout<<"Left shift :"<<(9>>2);
    return 0; 
}
