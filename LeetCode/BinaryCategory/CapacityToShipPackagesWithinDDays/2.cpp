class Solution {
public:
    
    bool ispossible(vector<int>&weights, int days,int mid){
        int d =1; 
        int sum =0;
        for(int i =0; i< weights.size(); i++){
            sum += weights[i];
            if(sum > mid){
                //we can't load it into conveyor belt hence we need another 
                d++;
                sum = weights[i];
                
            }
        }
        if(d > days) return false;
        else return true;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0; 
        int high =0; 
        int ans = 0;
         for(int i =0; i< weights.size(); i++){
             low = max(low, weights[i]);
             high += weights[i];
         }
        while(low<= high){
            int mid = low +(high - low)/2;
            if(ispossible(weights, days, mid) == true){
                //can be a valid solution
                ans = mid; 
                high = mid-1;
                //search for some lower value possibility
                
            }else{
                 low = mid+1;
            }
        }
        return ans;
    }
};
