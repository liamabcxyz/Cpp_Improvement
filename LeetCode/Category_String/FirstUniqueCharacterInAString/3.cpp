class Solution {
public:
    int firstUniqChar(string s) {
        
        
        int arr[26];
        memset(arr,-1,sizeof(arr));
        
        for(int i=0;i<s.size();i++)
        {
            if(arr[s[i]-'a']==-1)
                arr[s[i]-'a']=i;
            else if(arr[s[i]-'a']!=-1)
                arr[s[i]-'a']=-2;
        }
        
        int ans=INT_MAX;
        
        for(int i=0;i<26;i++)
            if(arr[i]>=0)
                 ans=min(ans,arr[i]);
        
        
        if(ans==INT_MAX)
             ans=-1;
        return ans;
    }
};
