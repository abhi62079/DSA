class Solution {
public:
    bool hasEqualPrefixAndSuffix(string str1, string str2) {
    if (str1.length() <= str2.length()) {
        bool hasPrefix = false, hasSuffix = false;
        int matchingCharacters = 0;
        int i = 0, j = 0;

        while (i < str1.length()) {
            if (str1[i] == str2[j]) {
                hasPrefix = true;
                matchingCharacters++;
            }
            i++;
            j++;
        }

        i = str1.length() - 1;
        j = str2.length() - 1;

        while (i >= 0) {
            if (str1[i] == str2[j]) {
                hasSuffix = true;
                matchingCharacters++;
            }
            i--;
            j--;
        }

        return matchingCharacters == 2 * str1.length() && hasPrefix && hasSuffix;
    }

    return false;
}
    int countPrefixSuffixPairs(vector<string>& words) {
        int pairCount = 0;

    for (int i = 0; i < words.size() - 1; i++) {
        for (int j = i + 1; j < words.size(); j++) {
            if (hasEqualPrefixAndSuffix(words[i], words[j])) {
                pairCount++;
            }
        }
    }

    return pairCount;

    }
};