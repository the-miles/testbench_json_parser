#include <iostream>
#include <string>
#include <vector>

#include <fstream>
#include <json.hpp>
#include <CVelocity.hpp>
//using json = nlohmann::json;

std::vector<volz::Velocity> velocity;

void parse_velocity(nlohmann::json j, unsigned int seq)
{
    volz::Velocity tmp;
    try
    {
        tmp.setSequence(seq);
        tmp.setType(j["type"]);
        tmp.setStartPos(j["parameters"]["start pos"]);
        tmp.setEndPos(j["parameters"]["end pos"]);
        tmp.setLimitMin(j["limits"]["min"]);
        tmp.setLimitMax(j["limits"]["max"]);
    }
    catch (nlohmann::json::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    tmp.printDetails();
}

int main()
{
    std::ifstream f("testaction.json");
    nlohmann::json data = nlohmann::json::parse(f);

    std::cout << data["testaction"].size() << std::endl;

    for(int i = 0; i<data["testaction"].size(); i++)
    {
        /*if(data["testaction"][i]["type"] == "resistance")
        {
            std::cout << data["testaction"][i]["type"] << std::endl;
            std::cout << data["testaction"][i]["parameters"] << std::endl;
        }
        if(data["testaction"][i]["type"] == "baudrate")
        {
            std::cout << data["testaction"][i]["type"] << std::endl;
            std::cout << data["testaction"][i]["parameters"] << std::endl;
        }
        if(data["testaction"][i]["type"] == "write firmware")
        {
            std::cout << data["testaction"][i]["URL"] << std::endl;
            std::cout << data["testaction"][i]["parameters"] << std::endl;
        }*/
        if(data["testaction"][i]["type"] == "velocity")
        {
            parse_velocity(data["testaction"][i],i);
        }
    }

    // j.at("first").get_to(name.first);
    //std::cout << data.dump(4) << std::endl;
}
