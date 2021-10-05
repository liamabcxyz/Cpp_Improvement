class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
       
        vector<double> res;
        vector<int> tempk;
        
        double median=0;
        
        for(int i=0;i<k;i++)
        {
            tempk.push_back(nums[i]);
        }
        sort(tempk.begin(),tempk.end());
    
        
        if(k%2==0)
        {
            res.push_back((double(tempk[k/2])+double(tempk[(k/2) - 1])) * 100000.0 / 200000.0);
        }
        else
        {
            res.push_back((tempk[k/2]) * 100000.0 / 100000.0);
        }
        
        for(int i=1;i<nums.size()-k+1;i++)
        {
            auto index = find(tempk.begin(),tempk.end(),nums[i-1]);

            tempk.erase(index);
            tempk.push_back(nums[i+k-1]);
            sort(tempk.begin(),tempk.end());

            if(k%2==0)
            {
                res.push_back((double(tempk[k/2])+double(tempk[(k/2) - 1])) * 100000.0 / 200000.0);
            }
            else
            {
                res.push_back((tempk[k/2]) * 100000.0 / 100000.0);
            }
            
        }
        
        return res;
    }
};
