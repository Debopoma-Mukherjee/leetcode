class Solution {
public:
   vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
    vector<int> words2Freq(26, 0);
    vector<string> result;

    for (const string& word : words2) {
        vector<int> wordFreq(26, 0);
        for (char c : word) {
            wordFreq[c - 'a']++; 
        }
        for (int i = 0; i < 26; i++) {
            words2Freq[i] = max(words2Freq[i], wordFreq[i]); 
        }
    }

    for (const string& word : words1) {
        vector<int> words1Freq(26, 0);
        for (char c : word) {
            words1Freq[c - 'a']++;  
        }

        bool isValid = true;
        for (int i = 0; i < 26; i++) {
            if (words1Freq[i] < words2Freq[i]) {
                isValid = false;
                break;
            }
        }

        if (isValid) {
            result.push_back(word); 
        }
    }

    return result;
}
};