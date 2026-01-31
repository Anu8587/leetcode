class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int> minfreqall;

        for(char ch = 'a';ch<='z';ch++){
            minfreqall[ch] = 1000;
        }

        for (string &word : words){
            unordered_map<char,int> freq;
            for(char ch : word){
                freq[ch]++;
            }

            for(char ch='a';ch <= 'z';ch++){
                minfreqall[ch] = min(minfreqall[ch],freq[ch]);
            }
        }

        vector<string> ans;
        for(char ch='a';ch <= 'z';ch++){
            while(minfreqall[ch]>0){
                ans.push_back(string(1,ch));
                minfreqall[ch]--;
            }
        }
        return ans;
    }
};