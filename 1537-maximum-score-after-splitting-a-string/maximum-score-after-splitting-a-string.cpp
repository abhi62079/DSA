class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        int result=INT_MIN;
        // int zero_count=0;
        // int one_count=0;
        for(int i=0; i<=n-2; i++)  {
             int zero_count=0;
            for(int j=0;j<=i;j++){
                if(s[j]=='0'){
                    zero_count++;
                }
            }
            int one_count=0;
            for(int k=i+1;k<n;k++){
                if(s[k]=='1'){
                    one_count++;
                }
            }
            result=max(result, zero_count+one_count);
        }
        return result;
    }
};