#include <bits/stdc++.h>
using namespace std;
//Using Sort() O(NlogN)
/* bool containsDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            return true;
    }
    return false;
} */

// Using Set
/* bool containsDuplicate(vector<int>& nums){
    unordered_set<int> s;
    for(int i : nums){
        if(s.find(i)!=s.end()) return true;
        s.insert(i);
    }
    return false;
} */

//Using Map
bool containsDuplicate(vector<int>& nums){
    unordered_map<int,int> mp;
    for(int num : nums){
        if(mp[num] >=1) return true;
        mp[num]++;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << boolalpha << containsDuplicate(nums);
    return 0;
}