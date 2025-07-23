class Solution {
public:
    int removePattern(string &s, char first, char second, int points) {
        stack<char> st;
        int score = 0;
        string temp;

        for (char c : s) {
            if (!st.empty() && st.top() == first && c == second) {
                st.pop(); 
                score += points;
            } else {
                st.push(c);
            }
        }

        temp.clear();
        while (!st.empty()) {
            temp += st.top();
            st.pop();
        }
        reverse(temp.begin(), temp.end());
        s = temp;  

        return score;
    }

    int maximumGain(string s, int x, int y) {
        int result = 0;

        if (x > y) {
            result += removePattern(s, 'a', 'b', x);
            result += removePattern(s, 'b', 'a', y); 
        } else {
            result += removePattern(s, 'b', 'a', y); 
            result += removePattern(s, 'a', 'b', x); 
        }

        return result;
    }
};
