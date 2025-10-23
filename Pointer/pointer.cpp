#include <iostream>
#include <string>
using namespace std;

int main(){
    // cout<<"Printing a varible"<<endl;
    // int a=4;
    // cout<<a<<endl;
    // cout<<"Printing address of a varible using addresOf operator"<<endl;
    // cout<<&a<<endl;
    // // we can't set address of a variable to a new normal varible that's why we need to use pointers.
    // int *ptr=&a; 
    // cout<<"Printing address of the pointer varible and the value"<<endl;
    // cout<<&ptr<<" "<<ptr<<" "<<*ptr++<<endl;
    // // * is a derefrence operator
    // a++;
    // //ptr is copy of a so when we increase ptr the a will not increse but when we increse a ptr will increse cause it's poniting to a.
    // cout<<a<<" "<<*ptr<<endl;
    // //Pointers take 4 byte to store address
    // double d=23.8;
    // double *l=&d;
    // cout<<"size of int is "<<sizeof(d)<<endl;
    // cout<<"size of pointer is "<<sizeof(l)<<endl;
    // string str="hello";
    // char *ch=&str[0];
    // cout<<"before  "<<ch<<" "<<&ch<<" "<<(*ch)++ <<endl;
    // // ch=ch+3;
    // cout<<"after adding 3 "<<ch<<" "<<&ch<<" "<<*ch <<endl;
    

    char a='t';
    char *ptr=&a;
    // cout<<p<<" "<<*p<<endl;
    cout<<ptr<<" "<<*ptr<<" "<<endl;
    
    return 0;
}