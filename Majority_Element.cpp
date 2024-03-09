#include <bits/stdc++.h>
using namespace std;

//Using HashMap
/* int majorityElement(vector<int> &nums)
{
    unordered_map<int, int> freq;
    for (int i : nums)
        freq[i]++;
    int max_freq = INT_MIN;
    for (auto i : freq)
    {
        if (i.second > floor(nums.size() / 2))
        {
            max_freq = max(max_freq, i.first);
        }
    }
    return max_freq;
} */

//Using Moore's Majority Voting Algorithm
int majorityElement(vector<int> &nums)
{
    int count = 0, ans = 0;

    for (int i : nums)
    {
        if (count == 0)
        {
            ans = i;
            count = 1;
        }
        else
        {
            if (ans == i)
                count++;
            else
                count--;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << majorityElement(nums);

    return 0;
}