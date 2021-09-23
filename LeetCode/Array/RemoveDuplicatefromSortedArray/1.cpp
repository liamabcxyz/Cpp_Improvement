class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res=0;
        int prev=100000;

        
        for(int i=0;i<nums.size();i++)
        {
            if(prev!=nums[i])
            {
                nums[res]=nums[i];
                prev=nums[i];
                res++;
                i++;
                int count=0;
                while(i<nums.size())
                {
                    if(nums[i]==prev)
                    {
                        count++;
                    }
                    else
                    {
                        i--;
                        break;
                    }
                    i++;
                }
                cout<<count<<endl;
                if(count==0)
                {
                    
                }
                else
                {
                    nums[res]=prev;
                    res++;
                }
            }
        }
        
        return res;
    }
};
