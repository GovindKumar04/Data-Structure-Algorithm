#include <iostream>
#include <vector>



int getLength(char arr[]){
    int count=0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count;
}
void reverseString(std::vector<char>& s) {
        int count=0;
        for(int i=0; s[i]!='\0';i++){
            count++;
        }
        int st=0;
        int e=count-1;
        while(st<e){
            std::swap(s[st++],s[e--]);
        }
        for(int i=0; i<count; i++){
            std::cout<<s[i]<<" ";
    }
    }
int main(){
    std::vector<char> ch={'h','e','l','l','o'};
    
    std::cout<<"Reverse string is ";
    reverseString(ch);
    for(char i='A'; i<='Z'; i++){
        std::cout<<i-'A'<<" ";
    }

}