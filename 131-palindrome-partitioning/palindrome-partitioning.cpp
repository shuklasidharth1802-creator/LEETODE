class Solution {
public:
int n;
bool isPalindrome(string&s, int l, int r){
    while(l<r){
        if(s[l]!=s[r])
        return false;
        l++;
        r--;
    }
    return true;
}
void fun(string &s, int idx, vector<string>&diary,vector<vector<string>>&res){
    if(idx==n){
        res.push_back(diary);
        return;
    }
    for(int i=idx; i<n; i++){
        if(isPalindrome(s,idx,i)){
            diary.push_back(s.substr(idx,i-idx+1));
            fun(s,i+1,diary,res);
            diary.pop_back();
        }
    }
    return;
}
    vector<vector<string>> partition(string s) {
        n=s.length();
        vector<vector<string>>res;
        vector<string>diary;
        fun(s,0,diary,res);
        return res;
        
    }
};