#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>

using std::string;
using std::cin;
using std::cout;
using std::vector;
using std::tolower;

// Для фукнций std::isalpha и std::toupper используйте эту локаль
std::locale locale{""};

auto is_isogram(std::string const& word) -> bool {
    sort(test.begin(), test.end());

    vector<char> symbols;

    for (int i = 0; i < test.size(); i++) {
        int s = (int)(test[i]);
        if (s >= 97 and s <= 122) {
            symbols.push_back(test[i]);
        }
    }
    for (int i = 0; i < symbols.size(); i++) {

        if (tolower(symbols[i]) == tolower(symbols[i + 1])) {
            return false;
            break;
        } else {
            return true;
        }
    }
}
