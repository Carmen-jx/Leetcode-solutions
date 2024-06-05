class Solution(object):
    def reverseVowels(self, s):
        string = list(s)
        vowels = 'aeiouAEIOU'
        x= 0
        y= len(s)-1

        while x<y:
            while x < y and string[x] not in vowels:
                x +=1
            while x < y and string[y] not in vowels:
                y -=1

            string[x], string[y] = string[y], string[x]

            x+=1
            y-=1
        
        return ''.join(string)
