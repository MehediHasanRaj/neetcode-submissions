class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()<=1) return true;

        int front = 0, back = s.size()-1;
        
        while(front <= back){
            while(!isalnum(s[front]) && front < back)front++;
            while(!isalnum(s[back]) && front < back)back--;

            if(tolower(s[front])!=tolower(s[back]))return false;
            front++;
            back--;
        }

        return true;
    }
};


/*

1. using two pointer front, and back.
2. make a new string reverly except all non numeric character, then compare, 
3. using stack data structure, and compare,

i think, using two pointer is space efficient

*/