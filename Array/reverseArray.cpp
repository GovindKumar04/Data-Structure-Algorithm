#include <iostream>
#include <vector>
using namespace std;

// void reverseArray(int arr[], int size)
// {
//     int count=size;
//     int partition = size / 2;
//     for (int i = 1; i <= partition; i++)
//     {
//         if(i!=count){
//             swap(arr[i-1],arr[count-1]);
//         }
//         count--;
//     }
// }

// int main(){
//     cout<<"Enter the size of the array"<<endl;
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }
//     cout<<"Before reversing"<<endl;
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     reverseArray(arr,size);
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
void reverseArray(vector<int> &arr , int m){
    // Write your code here 
    int count=arr.size();
    int partition =  (count+m)/ 2;
    for (int i = m+1; i <= partition; i++)
    {
        if(i!=count-1){
            swap(arr[i],arr[count-1]);
        }
        count--;
    }      	
}

int main(){
    int position,size,e;
    cout<<"Enter the postion of the element\t";
    cin>>position>>size;
    vector <int> arr;
    for(int i=0; i<size; i++){
        cin>>e;
        arr.push_back(e);
    }
    cout<<"Before reversing"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    reverseArray(arr , position);

    cout<<"After reversing"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
