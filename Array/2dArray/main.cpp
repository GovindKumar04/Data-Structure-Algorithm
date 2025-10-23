#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[3][3];
      cout<<"enter the eleements of the array"<<endl;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
    }
    int *a=&arr[0][0];
    int *b=&arr[0][1];
    int *c=&arr[0][2];
    int *d=&arr[1][0];
    int *e=&arr[1][1];
    int *f=&arr[1][2];
    int *g=&arr[2][0];
    int *h=&arr[2][1];
    int *i=&arr[2][2];
    
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<i<<endl;
    cout<<"printing the eleements of the array"<<endl;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout<<arr[i][j];
        }
    }

    return 0;
}