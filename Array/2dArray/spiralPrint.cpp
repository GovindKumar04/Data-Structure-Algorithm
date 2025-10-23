#include <iostream>
#include <vector>
using namespace std;

void spiralPrint(vector<vector<int>> arr)
{
    int row = arr.size();
    int col = arr[0].size();

    int total = row * col;
    int count = 0;

    int startingRow = 0;
    int endingRow = row - 1;
    int startingCol = 0;
    int endingCol = col - 1;

    while (count < total)
    {
        for (int i = startingCol; i <= endingCol && count < total; i++)
        {
            cout << arr[startingRow][i] << " ";
            count++;
        }
        startingRow++;

        for (int i = startingRow; i <= endingRow && count < total; i++)
        {
            cout << arr[i][endingCol] << " ";
            count++;
        }
        endingCol--;

        for (int i = endingCol; i >= startingCol && count < total; i--)
        {
            cout << arr[endingRow][i] << " ";
            count++;
        }
        endingRow--;
        for (int i = endingRow; i >= startingRow && count < total; i--)
        {
            cout << arr[i][startingCol] << " ";
            count++;
        }
        startingCol++;
    }
}
int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {11, 45, 98, 90}};
    spiralPrint(arr);
    return 0;
}
