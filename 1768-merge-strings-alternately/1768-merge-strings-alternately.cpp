class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        string merge="";
        int i=0;
        int j=0;
        while(i<n && j<m){
            merge+=word1[i++];
            merge+=word2[j++];
        }
        while(i<n){
            merge+=word1[i++];
        }
        while(j<m){
            merge+=word2[j++];
        }
        return merge;
    }
};