#include <iostream>
#include <string>

class Solution {
public:
    std::string intToRoman(int num) {
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        std::string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        std::string result = "";
        int i = 0;
        
        while (num > 0) {
            if (num >= values[i]) {
                result += symbols[i];
                num -= values[i];
            } else {
                i++;
            }
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    int num;

    std::cout << "Enter integer: ";
    std::cin >> num;

    std::string roman = sol.intToRoman(num);
    std::cout << roman << std::endl;

    return 0;
}
