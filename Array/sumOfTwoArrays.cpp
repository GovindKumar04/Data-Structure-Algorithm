#include <iostream>
#include <vector>

using namespace std;

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int sum=0, carry=0;
	vector<int> arr;
	while(n>0 && m>0){
		sum=a[--n]+b[--m]+carry;
        
		arr.push_back(sum%10);
		carry=sum/10;
        cout<<"both"<<sum<<" "<<carry<<endl;
	}
	while(n>0){
		sum=a[--n]+carry;
        // cout<<"Sum"<<sum<<endl;
		arr.push_back(sum%10);
		carry=sum/10;
        cout<<"N"<<sum<<" "<<carry<<endl;
	}
	while(m>0){
		sum=b[--m]+carry;
        cout<<"Sum"<<sum<<endl;
		arr.push_back(sum%10);
		carry=sum/10;
        cout<<"m"<<sum<<" "<<carry<<endl;
	}
    if(carry>0)
        arr.push_back(carry);
	return arr;
}

int main(){
    vector<int> a={0,9,0};
    vector<int> b={7,9,9};

    vector<int> c= findArraySum(a,3, b, 3);

    for(int i=0; i<c.size(); i++){
        cout<<c[i]<<" ";
    }

    return 0;
}