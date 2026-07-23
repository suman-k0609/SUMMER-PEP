class Solution {
  public:
    int countSubarray(vector<int>& arr) {
        // code here
        unordered_map<int,int> mp;
        int prefix=0;
        mp[0]=1;
        int ans=0;
        for(int i=0;i<arr.size();i++){
          if (arr[i] == 0)
                arr[i] = -1;

            prefix += arr[i];

            if (mp.find(prefix) != mp.end())
                ans += mp[prefix];

            mp[prefix]++;
        }

        return ans;
      
        
    }
};
//he;lo