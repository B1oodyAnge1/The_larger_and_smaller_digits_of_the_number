#include <iostream>
#include <string>
#include <regex>


int inputInt(std::string);

int main()
{
    return 0;
}

int inputInt(std::string textReq = "Enter an integer number") { // textReq текстовый запрос у пользователя
    std::string number;
    std::regex reg("^[0-9]"); //регулярное выражение
    while (true)
    {
        std::cout << textReq << std::endl;
        std::cin >> number;
        if (std::regex_search(number, reg)) {
            return stoi(number); //преобразование string в int. С++ 11
        }
    }
}