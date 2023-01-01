class Solution {
private:
    vector<string> list;    
    void generateWord(string &s) {
        string sub_s="";
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ' ') {
                if(sub_s.size() > 0)
                    list.push_back(sub_s);                
                sub_s = "";
                continue;
            }
            sub_s += s[i];
        }
        if(sub_s.size() > 0)
            list.push_back(sub_s);
    }
public:
    bool wordPattern(string pattern, string s) {                
        generateWord(s); // create all words from string s and store it into list vector. 
        vector<pair<char, string>> pp; // it store the pair of pattern and list value.
        unordered_map<char, string> mp; // here the key is pattern char and value is list element
        unordered_map<string, char> check; // here the key is list element char and value is pattern char
        if(pattern.size() != list.size()) 
        // if patten size and list size are not same that means the value of list 
        // and the element of pattern are not same. that's why we return false here.
        // for this case pattern="aaa" and s="aa aa aa aa"
            return false;
        for (int i = 0; i < pattern.size(); i++) {
            pp.push_back({pattern[i], list[i]});
            mp[pattern[i]] = list[i];
            check[list[i]] = pattern[i];
        }
        if(check.size() != mp.size()) // check there have any same value for different key
        // like pattern = "abba" and s = "dog dog dog dog".
        // same word(s) for different char(pattern) are not accept.
            return false;        
        for(auto it : pp) {
            if(mp[it.first] != it.second)
                return false;
        }
        return true;
    }
};