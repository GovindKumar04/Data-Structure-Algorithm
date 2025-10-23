#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool checkIncludion(string s1, string s2){
int arr[26]={0};
bool in=1;
    for(char ch: s2){
        int a=ch-'a';
        arr[a]++;
    }
    int arr2[26]={0};
    for(char ch: s2){
        int a=ch-'a';
        arr2[a]++;
    }
    int count=0;
    for(int i=0; i<26; i++){
        // if(s2[i]!=0)
    }
    return 1;
}
int main(){
    // checkInclusion("bhuyuvbyu","auude");
    int arr[26]={0};
   
    arr[9]=9;
    arr[4]=7;
    for(int a:arr){
        cout<<a<<" ";
    }
    cout<<endl;
    arr[26]={0};
    for(int a:arr){
        cout<<a<<" ";
    }
    return 0;

}