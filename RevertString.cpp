class Solution {
public:
    string reverseString(string s) {
        vector<char>temp;
        for(int i = 0 ; i < s.size(); ++i){
            temp.push_back(s[i]);
        }
        string result;
        for(int i = s.size() - 1; i >= 0; --i){
            result +=s[i];
        }
        return result;
    }
};
