/*
gcdOfStrings is a recursive function. 
If the length of str2 is greater than str1, it'll swap recall itself recursively.
If str2 is not a prefix of str1, then it'll return an empty string indicating that there is no common prefix.
If str2 is empty then it means that the gcd is found so it returns str1.
If neither the above, then it'll call itself recursively but with the common prefix cut off from str1 and str2. 
*/


class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
         if (str1.length() < str2.length()){
             return gcdOfStrings(str2, str1);
         }else if(str1.find(str2) != 0){
             return "";
         }else if( str2 == ""){
             return str1;
         }else {
             return gcdOfStrings(str1.substr(str2.length()),str2);
         }
    }

};