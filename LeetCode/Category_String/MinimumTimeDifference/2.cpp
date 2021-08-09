class Solution {
public:
  int ToMinute(string &s){
    return ((s[0] - '0')*10 + s[1] - '0')*60 + ((s[3] - '0')*10 + s[4] - '0');
  }
  
  int findMinDifference(vector<string>& timePoints) {
    set<int> st;
    
    for(auto s : timePoints){ 
      int minutes = ToMinute(s);
      if(st.count(minutes)) return 0;
      st.insert(minutes);
      st.insert(minutes + 1440);
    }
    
    set<int>::iterator it = st.begin(), it2;
    it2 = it; it2++;
    int answer = *it2 - *it;
    
    for(;it2 != st.end(); it++, it2++)
      if(answer > *it2 - *it) answer = *it2 - *it;
    
    return answer;
  }
};
