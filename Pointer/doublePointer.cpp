#include <iostream>

using namespace std;

int main(){
    const int a=7;
    const int *ptr=&a;
    cout<<ptr<<" "<<*ptr<<endl;
    const int **ptr2=&ptr;
    cout<<"Printing ptr2 address:- "<<ptr2<<endl;
    cout<<"Printing value of ptr2:- "<<*ptr2<<endl;
    cout<<"Printing the variable stored in ptr2:-  " <<**ptr2<<endl;
    return 0;
}