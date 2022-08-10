#include <iostream>
#include <string>
#include <vector>

#include <fstream>
#include <json.hpp>
//using json = nlohmann::json;

int main()
{
    std::vector<std::string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const std::string &word : msg)
    {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    //nlohmann::json jsonData = nlohmann::json::parse(your_json);

    std::ifstream f("testaction.json");
    nlohmann::json data = nlohmann::json::parse(f);

    std::cout << data["testaction"] << std::endl;

   // j.at("first").get_to(name.first);

    std::cout << data.dump(4) << std::endl;
}
