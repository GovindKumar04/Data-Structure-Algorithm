#include <iostream>

using namespace std;

int main(){
    int arr[10]={1,2,3,4,5};
    cout<<++(*arr)<<endl;
    int *ptr=&arr[0];
    cout<<arr<<endl;
    cout<<&arr+1<<endl;
    cout<<ptr<<" "<<(*ptr)++<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    int **l=&ptr;
    cout<<(**l)++<<" "<<l<<endl;
    cout<<arr[0];
    return 0;

}