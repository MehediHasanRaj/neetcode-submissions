class Solution {
public:
    int characterReplacement(string s, int k) {
      int maxLength = 0;
      int maxF = 0;
      int l = 0;
      int fre[26] = {0};

      for(int r = 0; r < s.size(); ++r){
        //increasing the window
        fre[s[r]-'A']++;
        //updating the maxF
        maxF = max(maxF, fre[s[r]-'A']);

        //shrinking when invalid, we move our window
        while( r - l + 1 - maxF > k){
            fre[s[l]-'A']--;
            l++;
        }
        maxLength = max(maxLength, r - l + 1);

      }
      return maxLength;

    }
};


// r = increasing the window size always, this is basic for window problem
// l = shrinking the window size;
// just, we need to carefully increase and shrink the window size