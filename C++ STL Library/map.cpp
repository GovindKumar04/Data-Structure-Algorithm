#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<int, int> map;
    map[1]=1;
    map[2]=2;
    map[3]=3;
    map[4]=4;

    for(auto it: map){
        cout<<it.first<<" "<<++it.second<<endl;
    }
    for(auto it: map){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}