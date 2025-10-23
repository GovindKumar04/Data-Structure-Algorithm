#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    for(int i=0; i<a; i++){
        int x,y;
        cin>>x>>y;
        long long sum=0;
        for(int j=x; j<=y; j++){
            sum=(y-x+1)*(x+y)/2;
        }
        cout<<sum<<endl;
    }
    return 0;
 }