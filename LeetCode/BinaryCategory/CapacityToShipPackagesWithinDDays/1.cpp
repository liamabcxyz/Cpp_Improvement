class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        for(int i=0;i<weights.size();i++)
            sum+=weights[i];
        
        int output=sum/days;

        
        for(int i=output;true;i++)
        {
            cout<<"i: "<<i<<endl;
            int count=1;
            int tempsum=0;
            int judge=true;
            for(int j=0;j<weights.size();j++)
            {   
                if(weights[j]>i)
                {
                    judge=false;
                    break;
                }
                std::cout<<"count: "<<count<<std::endl;
                cout<<"tempsum: "<< tempsum<<endl;

                
                if(tempsum+weights[j]>i)
                {
                    count++;
                    tempsum=weights[j];
                    cout<<"---"<<endl;
                    if(count>days)
                        {
                            judge=false;
                            break;
                        }
                    
                }
                else
                {
                    tempsum+=weights[j];
                }
                
            }
            cout<<"-------"<<endl;
            if(judge) return i;
            
        }
        return -1;
    }
};
