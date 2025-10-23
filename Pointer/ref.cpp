#include <iostream>

using namespace std;

int main(){
    int a=4;
    int &b=a;
    cout<<b++;
    cout<<a<<endl;
    // dynamic memory allocation bad practice
    int n;
    cin>>n;
    int srr[n];

    // dynamic memory allocation good practice
    int *arr= new int[10];
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete []arr;
    int *arr1= new int[100]();
    for(int i=0; i<10; i++){
        cout<<i[arr1]<<" ";
    }
    cout<<endl;
    // arr=nullptr;
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
        
}