#include <iostream>
#include <vector>
using namespace std;
 
bool findK(vector<vector<int>> arr, int target){
    int is=0, js=0;
    int ie=arr.size()-1, je=arr[0].size()-1; 
    int imid=is+(ie-is)/2;
    int jmid=js+(je-js)/2;

    while(is<ie && js<je){
        if(arr[imid][jmid]==target){
            return true;
        }

        if(arr[imid][jmid]<target && jmid<arr[0].size()-1){
            js=jmid+1;
        }else if(arr[imid][jmid]<target){
            is=imid+1;
        }else if(arr[imid][jmid]>target && jmid<arr[0].size()>0){
            je=jmid-1;
        }else if(arr[imid][jmid]>target){
            ie=imid-1;
        }
        imid=is+(ie-is)/2;
        jmid=js+(je-js)/2;
    }
    return 0;
}

int main(){
    return 0;
}