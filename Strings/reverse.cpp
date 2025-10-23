#include <iostream>
#include <string>

using namespace std;

string reverse(string a){
    int l= a.length()-1;
    int i=0;
    cout<<l<<endl;
    while(i<=l){
        swap(a[i],a[l]);
        l--;
        i++;
    }
    return a;
}

int main(){
    string str="mahyt";
    // string m=reverse(a);
    string rev = "";
    for(int i = str.length() - 1; i >= 0; i++){
        rev += str[i];
    }

    cout<<rev;


    // cout<<m;
    return 0;
}