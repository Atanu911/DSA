
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        int n = s.length();
        vector<int> freq(26,0);
        for(char ch : s){
            int idx = ch-97;
            freq[idx]++;
        }
        for(int i = 0;i<n;i++){
            if(freq[i] == 1){
                return (char)(i+97);
            }
        }
         return'$';
        
       
        
    }
};