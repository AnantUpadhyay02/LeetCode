class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        int i = 0;
        string str = "";
        while(i<n||i<m){
            if(i<word1.length())
                str = str+word1.at(i);
            if(i<word2.length())
                str = str + word2.at(i);

            i++;
        }
        return str;
    }
};