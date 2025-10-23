#include <iostream>
using namespace std;
int main()
{
    int arr[100], index, num,n;
    cout<<"Enter  the Number of elements to take: \t";
    cin>>n;
    cout<<"Enter  Numbers: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\nEnter a Number to Search: ";
    cin>>num;
    for(int i=0; i<10; i++)
    {
        if(arr[i]==num)
        {
            index = i;
            break;
        }
    }
    cout<<"\nFound at Index No."<<index;
    cout<<endl;
    return 0;
}
