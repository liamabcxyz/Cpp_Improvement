int romanToInt(string s) {
    int output = 0;
    int plus;
    
	s.push_back('A');
    //  To make the condition variables beneath easier, push any random character to s
	
    for (int i = 0; i < s.size() - 1; i++) { //size - 1 because i don't need to check 'A' letter
        switch (s[i]){
            case 'M':
                plus = 1000;
                break;
            case 'D':
                plus = 500;
                break;
            case 'C':
                plus = 100;
                break;
            case 'L':
                plus = 50;
                break;
            case 'X':
                plus = 10;
                break;
            case 'V':
                plus = 5;
                break;
            case 'I':
                plus = 1;
                break;
            default:
                plus = 0;
                break;
        }
        
		//Check the condition
		
        bool a = s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X');
        bool b = s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C');
        bool c = s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M');
        
        if (a || b || c) {
            plus = -plus;
        }
        output += plus;
    }
    
    return output;
}
