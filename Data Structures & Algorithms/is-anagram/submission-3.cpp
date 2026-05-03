class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        
        vector<int> freq(26,0);

        for(auto c: s) freq[c-'a']++;
        for(auto c: t) freq[c - 'a']--;

        for(int x: freq) if(x!=0) return false;
        return true;
    }
};

/*

1. sorting, and compare both. o(nlogn + n), space o(1)
2. using two map, and compare o(n), space, o(2*26)
3. using one map, and decrement if exist, o(n), space o(26)
4. Best, using frequency count of 26 size, o(n), space o(26)


*/