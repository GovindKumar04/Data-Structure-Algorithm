#include <iostream>

using namespace std;

int main(){
    int arr[10]={4,9,7,33,67,37};
    for(int i=0; i<6; i++){
            int min=i;
        for(int j=i+1; j<6; j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    for(int i=0; i<6; i++){
        cout<<arr[i] << " ";
    }
    return 0;
}


