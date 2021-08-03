class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        if (s.length() < t.length()){
            return isOneEditDistance(t,s);
        }
        if (s.length() - t.length() > 1){
            return false;
        }
        for (int i = 0; i < t.length(); i++){
            char si = s[i];
            char ti = t[i];
            if (si != ti){
                if (s.length() - t.length() == 0){
                    return s.substr(i+1,s.length()) == t.substr(i+1,t.length());
                    }else{
                    return s.substr(i+1,s.length()) == t.substr(i,t.length());
                }
            }
        }
        return s.length() -1 == t.length();
    }
};
