#include<bits/stdc++.h>
using namespace std;
//Approach 1 (Naive Solution)

/* vector<int> TwoSum(vector<int> &arr,int target){
    vector<int> ans;
    for(int i = 0; i<arr.size(); i++){
        for(int j = i+1; j<arr.size(); j++){
            if(arr[i]+arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return {-1,-1};
} */

// Approach 2 (Using Hash Table)

vector<int> TwoSum(vector<int> &arr,int target){
    int n = arr.size();
    unordered_map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int need = target - arr[i];
        if(mp.find(need)!=mp.end()) return {mp[need],i};

        mp[num] = i;
    }

    return{-1,-1};
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    int target;
    cin>>target;
    for (int i = 0; i < n; i++)
    {   
        int num;
        cin>>num;
        arr.push_back(num);
    }
    vector<int> ans = TwoSum(arr,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}