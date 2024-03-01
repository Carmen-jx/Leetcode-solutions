class Solution {

    bool isVowel(char c){
        return c == 'a' || c == 'e' ||c == 'i' ||c == 'o' ||c == 'u' ;
    }

public:
    int maxVowels(string s, int k) {
        int output =0;
        int maxVowel;

        for (int i =0; i< k; i++){
           if(isVowel(s[i])){
               output ++;
           }
        }

        maxVowel=output;

        for (int i =0; i< s.size() - k; i++){
            if( isVowel(s[i])){ output --;}

            if (isVowel(s[i + k])){ output ++;}

            maxVowel= max(maxVowel,output);
        }

        return maxVowel;
    }
};