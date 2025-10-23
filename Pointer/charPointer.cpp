#include <iostream>

using namespace std;

int main(){
   
    char t[7]="lhirur";
    char *p=&t[0];
    char a='t';
    char *ptr=&a;
    cout<<p<<" "<<*p<<endl;
    cout<<ptr<<" "<<*ptr<<" "<<endl;
    
    return 0;
}