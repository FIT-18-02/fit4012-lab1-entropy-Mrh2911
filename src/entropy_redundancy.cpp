#include <cmath>
#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

double calculate_entropy(const string &text) {
    if (text.empty()) {
        return 0.0;
    }

    map<char, int> freq;
    for (char c : text) {
        freq[c]++;
    }

    double entropy = 0.0;
    for (const auto &pair : freq) {
        // p = số lần xuất hiện / tổng số ký tự
        double p = static_cast<double>(pair.second) / text.size();
        // Công thức Shannon Entropy: H(X) = -sum(p * log2(p))
        entropy -= p * log2(p);
    }
    return entropy;
}

double calculate_redundancy(const string &text, int alphabet_size = 256) {
    if (text.empty()) {
        return 0.0;
    }

    double H_X = calculate_entropy(text);
    
    double log2_N = log2(static_cast<double>(alphabet_size));
    
    double redundancy = log2_N - H_X;

    return (redundancy < 0) ? 0.0 : redundancy;
}

int main() {
    string input;
    cout << "Enter a string of characters: ";
    getline(cin, input);

    double entropy = calculate_entropy(input);
    double redundancy = calculate_redundancy(input);

    cout << fixed << setprecision(4);
    cout << "--- Result ---" << endl;
    cout << "Input string: \"" << input << "\"" << endl;
    cout << "Entropy (H):    " << entropy << " bits/symbol" << endl;
    cout << "Redundancy (R): " << redundancy << " bits/symbol" << endl;
    
    return 0;
}
