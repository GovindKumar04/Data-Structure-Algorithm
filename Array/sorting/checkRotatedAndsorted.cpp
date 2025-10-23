#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> nums)
{
    for (size_t i = 0; i < nums.size(); i++)
    {
        /* code */
        cout << nums[i] << " ";
    }
}
int pivot(vector<int> &nums)
{
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (nums[mid] >= nums[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
}
class Solution
{
public:
    bool check(vector<int> &nums)
    {

        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e - s) / 2;

        while (s < e)
        {
            if (nums[mid] >= nums[0])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }

        bool istrue = true;

        for (int i = e; i < nums.size() - 1; i++)
        {
            if (nums[i] < nums[i + 1])
            {
                istrue = true;
            }
            else
            {
                istrue = false;
                break;
            }
        }
        for (int j = e - 1; j > 0; j--)
        {
            if (nums[j] > nums[j - 1])
            {
                istrue = true;
            }
            else
            {
                istrue = false;
                break;
            }
        }
        return istrue;
    }
};

int main()
{
    vector<int> arr = {4, 5, 6, 1, 2, 3};
    int a = pivot(arr);
    cout << a;
    return 0;
}