#include <iostream>
#include <vector>

using namespace std;

vector<int> moveZeros(vector<int> arr)
{
    int size = arr.size();
    int i = 0;

    for (int j = 0; j < size; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[i++], arr[j]);
        }
    }
    
    return arr;
}
int EvenOdd(string n1 , string n2)
{
    //code here.
    if((stoi(n1)*stoi(n2))%2==0){
        return 1;
    }else{
        return -1;
    }
}
int main()
{
    // vector<int> arr = {0, 1, 0, 3, 12};
    // vector<int> newArr = moveZeros(arr);
    // for(int i=0; i<arr.size(); i++){
    //     cout<<newArr[i]<<" ";
    // }
    string n1="874";
    char a=n1[n1.length()-1];
    int b=a-'0';
    cout<<b;
    // cout<<"\n"<<EvenOdd("123","71");
}


