
class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<string, int> lookup;
        for (int right = minSize - 1; right < s.length(); ++right) {
            const auto& word = s.substr(right - minSize + 1, minSize);
            if (lookup.count(word)) {
                ++lookup[word];
            } else if (unique_count(word) <= maxLetters) {
                lookup[word] = 1;
            }
        }
        return lookup.empty()
               ? 0
               : max_element(lookup.cbegin(), lookup.cend(), 
                             [](const auto& a, const auto& b) {
                                 return a.second < b.second;
                             })->second;
    }

private:
    int unique_count(const string& word) {
        unordered_set<char> lookup;
        for (const auto& c : word) {
            lookup.emplace(c);
        }
        return lookup.size();
    }
};
