#include <iostream>

using namespace std;

void reverseArray(int *arr,int i, int j){
    if(i>=j){
        return;
    }
    swap(arr[i++], arr[j--]);
    reverseArray(arr,i,j);
}

int main(){
    int arr[]={1,2,3,4};
    reverseArray(arr,0,3);

    for(int i=0; i<4; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
