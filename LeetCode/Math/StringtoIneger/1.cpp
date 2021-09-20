inline int IntFromChar (char ch)
{
	switch (ch)
	{
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
	}
	return -1;
}

class Solution {
public:
    int myAtoi(string s) {
        int nRes = 0;
        bool bNegative = false;
        int i = 0;

        while (' ' == s [i] && ++i < s.length ());

        if ('-' == s [i]) {
            bNegative = true; 
            ++i;
        }
        else if ('+' == s [i]) ++i;

        for (int next = IntFromChar (s [i]); i < s.length () && -1 != next; next = IntFromChar (s [++i]))
        {
		    if (nRes > INT_MAX / 10 || nRes * 10 > INT_MAX - next)
            {
                return bNegative ? INT_MIN : INT_MAX;
            }
            nRes = nRes * 10 + next;
        }

        return bNegative ? -nRes : nRes;
    }
};
