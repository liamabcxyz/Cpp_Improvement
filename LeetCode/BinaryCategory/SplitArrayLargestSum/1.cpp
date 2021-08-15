class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        vector<int> vi;
        vector<int> vs;
        
        for(int i=0;i<m;i++)
            vi.push_back(i);
        
        vs.push_back(nums[0]);
        for(int i=1;i<m-1;i++)
        {
            vs.push_back(nums[i]);
        }
        
        int sum=0;
        for(int i=m-1;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        vs.push_back(sum);
    
        
        bool move=true;
        while(move)
        {
            for(auto item:vi)
                std::cout<<item<<std::endl;
            std::cout<<"--------"<<std::endl;
            for(auto item:vs)
                std::cout<<item<<std::endl;
            std::cout<<"------------"<<std::endl;
            
            move=false;
            
            for(int i=m-1;i>0;i--)
            {
                    // int max=std::max(vs[i],vs[i-1]);
                    int max=*max_element(vs.begin(),vs.end());
                    int ti=vs[i]-nums[vi[i]];
                    int tim1=vs[i-1]+nums[vi[i]];
                    int tmax=std::max(ti,tim1);
                    if(tmax<=max)
                    {
                        vs[i-1]=tim1;
                        vs[i]=ti;
                        vi[i]++;
                        move=true;
                    }
                
                // while(true)
                // {
                //     int max=std::max(vs[i],vs[i-1]);
                //     int max=*max_element(vs.begin(),vs.end());
                //     int ti=vs[i]-nums[vi[i]];
                //     int tim1=vs[i-1]+nums[vi[i]];
                //     int tmax=std::max(ti,tim1);
                //     if(tmax<=max)
                //     {
                //         vs[i-1]=tim1;
                //         vs[i]=ti;
                //         vi[i]++;
                //         move=true;
                //     }
                //     else
                //     {
                //         break;
                //     }
                // }

            }
            
        }
        return *max_element(vs.begin(),vs.end());
    }
};
