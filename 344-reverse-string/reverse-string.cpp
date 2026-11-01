class Solution {
public:
       
    void reverseString(vector<char>& s,int low, int high ) {
      
      if(low>=high) return;

      swap(s[low],s[high]);
      reverseString(s,low+1, high-1);
      
    }
    void reverseString(vector<char>&s){
        reverseString(s,0,s.size()-1); 
    }

};