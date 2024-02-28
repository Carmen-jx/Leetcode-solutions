class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1= word1.length();
        int len2 = word2.length();
        std::string word; 

        for(int i=0; i< max(len1, len2); i++){
            if (i < len1){
                word += word1[i];
            };

            if (i< len2){
                word += word2[i];
            }
        }

        return word;
    }

};