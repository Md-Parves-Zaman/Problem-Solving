#include <bits/stdc++.h>
#include <string>


using namespace std;

int main() {
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower); // convert to lowercase

    string result;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            // delete vowels
            continue;
        } else {
            result += "."; // Assigning "." before every lower case character.
            result += c;  // All the string are converted to lower case previously.
        }
    }

    cout << result << endl;

    return 0;
}
