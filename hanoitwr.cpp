#include <iostream>
using namespace std;

int countMoves(int n,char source,char auxilary, char destination){
    if(n==1){
        cout<<"Move disk 1 from "<<source<<"to"<<destination<<endl;
        return 1;
    }
    int moves =0;
    moves +=countMoves(n-1,source,destination,auxilary);
    cout<<"Move disk"<<n<<" from "<<source<<" to "<<destination<<endl;
    moves+=1;
    moves+=countMoves(n-1,auxilary,source,destination);
    return moves;
    }

int main(){
    int n;
    cout<<"Enter the number of stack";
    cin>>n;
    char source='A';
    char auxiliary = 'B';
    char destination = 'C';

    int totalMoves = countMoves(n, source, auxiliary,destination);
    cout<<"Total number of moves: "<<totalMoves<<endl;
    return 0;
}
