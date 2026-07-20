class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v(26);
        for(auto c:s){
            v[c-'a']++;
        }
        for(auto c:t){
            v[c-'a']--;
        }
        for(int it:v){
            if(it!=0){
                return false;
            }
        }
        return true;
    }
};
