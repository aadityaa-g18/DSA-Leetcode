class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size()-1;
        int m=word2.size()-1;

        int l=0;
        int r=0;

        string str="";

        while(l<=n || r<=m){
            if(l<=n && r<=m){
            str+=word1[l];
            str+=word2[r];
            }else if(l>n && r<=m){
                str+=word2[r];
            }else if(l<=n && r>m){
                str+=word1[l];
            }
            l++;
            r++;

        }
        return str;
        
    }
};