class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        for(int i=1;i<strs.size();i++){
            string temp = strs[i];
            string ans;
            int j=0;
            while(j<s.size()&&j<temp.size()){
            if(s[j]!=temp[j]){
                break;
            }
            ans.push_back(s[j]);
            j++;
            }
            s= ans;
        }
        return s;
    }
};