class Solution {
public:
    bool isAnagram(string s, string t) {

if(s.size()!= t.size()){
    return false;
}

        int alphabets[26]= {0};

        for(int i= 0; i<s.size(); i++){
            alphabets[s[i]-'a']++;
            alphabets[t[i]- 'a']--;
        }

bool ans= true;

for(int i= 0; i<26; i++){

    if(alphabets[i]){
        ans= false;
        break;
    }
}

return ans;
    }
};