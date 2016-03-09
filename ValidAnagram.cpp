class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s == "" && t == "") return true;
        if(s.size() != t.size())return false;
        map<char,int> smap;
        map<char,int> tmap;
        for(int i = 0; i < s.size(); ++i)
        {
            ++smap[s[i]];
        }
        for(int i = 0; i < t.size(); ++i)
        {
            ++tmap[t[i]];
        }
        if(smap.size() != tmap.size()) return false;
        return std::equal(smap.begin(),smap.end(),tmap.begin());
    }
};
