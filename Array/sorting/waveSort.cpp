#include <iostream>
#include <vector>
using namespace std;

vector <int> convertTowave(vector <int> arr, int size){
    for(int i=0; i<size-1; i+=2){
        swap(arr[i],arr[i+1]);
    }
    return arr;
}

int main(){
    vector <int> arr = {1,2,3,4,5,6};
    vector <int> a= convertTowave(arr,6);
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    return 0;
}