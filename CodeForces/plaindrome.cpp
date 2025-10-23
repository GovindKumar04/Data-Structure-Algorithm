#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0; i<a; i++){
        cin>>arr[i];
    }
    bool check=true;
    int s=0;
    int e=a-1;
    while(s<e){
        if(arr[s]!=arr[e]){
            check=false;
            break;
        }
        s++;
        e--;
        
    }
    check ? cout<<"YES" : cout<< "NO";
    return 0;
}
