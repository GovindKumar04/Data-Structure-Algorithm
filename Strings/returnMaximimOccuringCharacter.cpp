#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

char getMaxOccurChar(string str){
   
    int arr[26]={0};
    for(char ch:str){
        int i=0;
        i=ch-'a';
        arr[i]++;
    }
    int maxi=-1,indices;
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]>maxi){
            indices=i;
            maxi=arr[i];
        }
    }
    char finalAns='a'+indices;
    return finalAns;
}

int main(){
    char a='4';
    char b='5';
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b<<" "<<getMaxOccurChar("test");
    return 0; 
}
