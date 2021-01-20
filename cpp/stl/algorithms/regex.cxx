#include <iostream>
#include <regex>

void search(std::string& sentence) {
    std::regex pattern(R"(\w{2}\s*\d{5}(-\d{4})?)");
    std::smatch matches;
    std::cout << "sentence: " << sentence << std::endl;

    if (std::regex_search(sentence, matches, pattern)) {
        std::cout << "zipcode pattern matched: " << matches[0] << std::endl;
    }
    else {
        std::cout << "no zipcode found!" << std::endl;
    }
}

int main()
{
    std::string postal_code("TX 12345-6789");
    search(postal_code); 

    return 0;
}
