#include <iostream>
using namespace std;

int atoi(string &s, int & i, int & result, int & sign){
    if(i==s.length()) return result;
    if(s[i]==' ') i++;
    if(s[i]=='-' || s[i]=='+'){
        if(sign==-1 && s[i]=='+') return 0;
        if(s[i]=='-') sign=-1;
        else sign=1;
    }
    if(s[i]=='0')i++;
    else if(isdigit(s[i]) && i<s.length()){
        if (result * 10 + (s[i] - '0') >= INT32_MAX) {

                return INT32_MAX;
            }
            if (result * 10 + (s[i] - '0') <= INT32_MIN) {
                return INT32_MIN;
            }
            if (sign == -1) {
                result = result * 10 - (s[i] - '0');
            } else
                result = result * 10 + (s[i] - '0');
            
    }else return 0;
    atoi(s, i, result, sign);
    return result;
}

"     -0000007548674878t78947t97"

 int main(){
    string am= "23";
    int i=0;
    int n=2;
    int sign=1;
    cout<<atoi(am,i,n,sign);
    return 0;
 }