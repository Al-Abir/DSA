#include<bits/stdc++.h>
using namespace std;

class Solution {
public: 
    
      vector<int> twoSum(vector<int>& nums, int target) {
                map<int,int> m;
                vector<int> z;
                int n= nums.size();
                for(int i=0;i<n;i++)
                {
                    
                        int diff = target - nums[i];
                        if(m.find(diff) != m.end())
                        {
                        auto p = m.find(diff);        
                        z.push_back(p->second);
                        z.push_back(i);
                        }
                        m.insert(make_pair(nums[i],i));
                }
          
                return z;
}
};


int main(){

    Solution a;
    vector<int> v;
     v={1,6,3,2,5};
     vector<int> result= a.twoSum (v, 11);
     for(int i: result)
     {
          cout<<i<<endl;
     }
     return 0;

}
