#include <iostream>

#include <algorithm>
#include <vector>

using namespace std;

vector<int> spiralPrint(vector<vector<int>> input)
{
    vector<int> ans;
    int row=input.size();
    int col=input[0].size();
    
    int startingRow=0;
    int startingCol=0;
    int endingCol=col-1;
    int endingRow=row-1;

    int count=0;
    int total=row*col;

    while(count<total){

        for(int i=startingCol; i<=endingCol && count<total; i++){
            ans.push_back(input[startingRow][i]);
            count++;
        }
        startingRow++;
        for(int i=startingRow; i<=endingRow && count<total; i++){
            ans.push_back(input[i][endingCol]);
            count++;
        }
        endingCol--;
        for(int i=endingCol; i>=startingCol && count<total; i--){
            ans.push_back(input[endingRow][i]);
            count++;
        }
        endingRow--;
        for(int i=endingRow; i>=startingRow && count<total; i--){
            ans.push_back(input[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    return ans;
}
int main()
{
    vector<vector<int>> input={
    {1,2,3},
    {4,5,6},
    {7,8,9}};
    vector<int> ans=spiralPrint(input);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}