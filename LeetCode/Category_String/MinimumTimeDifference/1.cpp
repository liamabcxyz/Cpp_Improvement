class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> vm;
        for(std::vector<string>::iterator it=timePoints.begin();it!=timePoints.end();it++)
        {
            int a=600*((*it)[0]-'0')+60*((*it)[1]-'0')+10*((*it)[3]-'0')+((*it)[4]-'0');
            vm.push_back(a);
            std::cout<<a<<std::endl;
        }
        sort(vm.begin(),vm.end());
        
        int min=100000;
        int t;
        for(int i=0;i<vm.size()-1;i++)
        {
            t=vm[i+1]-vm[i];
            if(t<min)
            {
                min=t;
            }
        }
        
        t=1440-vm[vm.size()-1]+vm[0];
            if(t<min)
            {
                min=t;
            }
        return min;
    }
};
