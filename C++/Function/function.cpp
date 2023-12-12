#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

std::vector<std::string> split_string(const std::string &str, char delimiter)
{
    std::vector<std::string> internal_vec;
    std::stringstream ss(str);
    std::string tok;

    while (std::getline(ss, tok, delimiter))
    {
        internal_vec.push_back(tok);
    }

    return internal_vec;
}

int find_highest_unique_number(const std::string &input)
{
    std::vector<std::string> vec = split_string(input, ' ');
    std::vector<int> int_vec;

    for (const auto &el : vec)
    {
        int_vec.push_back(std::stoi(el));
    }

    std::sort(int_vec.begin(), int_vec.end());

    for (int i = int_vec.size() - 1; i >= 0; i--)
    {
        if (std::count(int_vec.begin(), int_vec.end(), int_vec[i]) == 1)
        {
            return int_vec[i];
        }
    }

    return -1;
}

int main()
{
    std::string input;
    std::cout << "Enter the input string: ";
    std::getline(std::cin, input);

    int highest_unique_number = find_highest_unique_number(input);

    if (highest_unique_number == -1)
    {
        std::cout << "No unique number found." << std::endl;
    }
    else
    {
        std::cout << "The highest unique number is: " << highest_unique_number << std::endl;
    }

    return 0;
}