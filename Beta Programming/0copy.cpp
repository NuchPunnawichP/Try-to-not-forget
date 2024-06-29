#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to generate all binary strings of length n
void generateBinaryStrings(int n, vector<string>& result, string current = "") {
    // Base case: if current string length is n, add to result
    if (current.size() == n) {
        result.push_back(current);
        return;
    }

    // Append '0' and '1' recursively
    generateBinaryStrings(n, result, current + '0');
    generateBinaryStrings(n, result, current + '1');
}

int main() {
    int n = 7;
    vector<string> bina;

    // Generate all binary strings of length n
    generateBinaryStrings(n, bina);

    // Output the generated binary strings
    for (const string& s : bina) {
        cout << s << endl;
    }

    return 0;
}
