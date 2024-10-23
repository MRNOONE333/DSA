class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)
        {
            if(i%2==0){
            mp[i]++;}
        }
        int maxi=0;
        int ele=-1;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second > maxi)
            {
                maxi=it->second;
                ele=it->first;
            }
            else if(it->second == maxi and it->first < ele)
            {
                ele=it->first;
            }
            
        }  
        return ele;
    }
};