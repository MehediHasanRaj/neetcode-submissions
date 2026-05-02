class Solution {
public:

    string encode(vector<string>& strs) {
        string enc = "";
        for(string s: strs) enc+=(to_string(s.size()) + "*"+s);

        return enc;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int start = 0, n = s.size(), i = 0;

        while(i < n){
            if(s[i]=='*'){
                int len = stoi(s.substr(start, i - start));
                res.push_back(s.substr(i+1, len));
                i = i + 1 +len;
                start = i;
            }
            else i++;
        }
        return res;
    }
};
