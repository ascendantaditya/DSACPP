#include <iostream>
#include <map>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        std::map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            int card;
            std::cin >> card;
            ++freq[card];
        }
        int result = 0;
        for (auto const& pair : freq) {
            result += pair.second % k;
        }
        std::cout << result << std::endl;
    }
    return 0;
}