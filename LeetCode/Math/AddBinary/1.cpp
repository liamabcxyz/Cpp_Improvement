class Solution {
public:
 string addBinary(string a, string b) {
        int m=size(a)-1,n=size(b)-1,carry=0;
         string res;
       
        while((m>=0||n>=0)||carry){
            int d1= (m>=0)?a[m--]-'0':0;
            int d2= (n>=0)?b[n--]-'0':0;
            int sum= d1+d2+carry;
			
			if(sum==2){        //case of 1 1 0 or 1 0 1 or 0 1 1
                sum=0;
                carry=1;
			}
            else if(sum==3){    //case  when a[i]=1,b[i]=1, carry=1;
                sum=1;
                carry=1;
            }
            else carry=0;
            res+=to_string(sum);  
        }
		
        reverse(res.begin(),res.end());
        return res;
    }
};
