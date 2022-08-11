#include <iostream>
#include <string>
#include <vector>

#include <fstream>
#include <json.hpp>
#include <CVelocity.hpp>
#include <CResistance.hpp>
//using json = nlohmann::json;

std::vector<volz::Velocity> velocity;

void parse_resistance(nlohmann::json j, unsigned int seq)
{
    //std::cout << j.dump(4) << std::endl;
    volz::Resistance tmp;

    std::cout << j.size() << std::endl;

    try
    {
        tmp.setSequence(seq);
        tmp.setType(j["type"]);
        tmp.setPath(j["parameters"]["path"]);
        tmp.setLimitMin(j["limits"]["min"]);
        tmp.setLimitMax(j["limits"]["max"]);
        tmp.setComment(j["comment"]);
    }
    catch (nlohmann::json::exception& e)
    {
        std::cout << e.what() << '\n';
    }

};
void parse_baudrate(nlohmann::json j, unsigned int seq){};
void parse_write_firmware(nlohmann::json j, unsigned int seq){};
void parse_power_supply_voltage(nlohmann::json j, unsigned int seq){};
void parse_read_pcb_serial(nlohmann::json j, unsigned int seq){};
void parse_set_position_zero(nlohmann::json j, unsigned int seq){};
void parse_environmental_stress_screening_temperature(nlohmann::json j, unsigned int seq){};
void parse_environmental_stress_screening_vibration(nlohmann::json j, unsigned int seq){};
void parse_environmental_stress_screening_runin(nlohmann::json j, unsigned int seq){};
void parse_write_eeprom(nlohmann::json j, unsigned int seq){};
void parse_temp_servo_internal(nlohmann::json j, unsigned int seq){};
void parse_current_servo_internal(nlohmann::json j, unsigned int seq){};
void parse_voltage_servo_internal(nlohmann::json j, unsigned int seq){};
void parse_continuous_movement(nlohmann::json j, unsigned int seq){};
void parse_gear_train_stress_test(nlohmann::json j, unsigned int seq){};
void parse_current(nlohmann::json j, unsigned int seq){};
void parse_current_spike(nlohmann::json j, unsigned int seq){};
void parse_linearity(nlohmann::json j, unsigned int seq){};

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

    // std::cout << data["testaction"].size() << std::endl;

    for(unsigned int i = 0; i<data["testaction"].size(); i++)
    {
        if(data["testaction"][i]["type"] == "resistance")
        {
            parse_resistance(data["testaction"][i],i);
        }
        if(data["testaction"][i]["type"] == "baudrate")
        {
            parse_baudrate(data["testaction"][i],i);
        }
        if(data["testaction"][i]["type"] == "write firmware")
        {
            parse_write_firmware(data["testaction"][i],i);
        }
        if(data["testaction"][i]["type"] == "power supply voltage")
        {
            parse_power_supply_voltage(data["testaction"][i],i);
        }
        if(data["testaction"][i]["type"] == "read pcb serial")
        {
            parse_read_pcb_serial(data["testaction"][i],i);
        }
        if(data["testaction"][i]["type"] == "set position zero")
        {
            parse_set_position_zero(data["testaction"][i],i);
        }
        if(data["testaction"][i]["type"] == "environmental stress screening temperature")
        {
            parse_environmental_stress_screening_temperature(data["testaction"][i],i);
        }
        if(data["testaction"][i]["type"] == "environmental stress screening vibration")
        {
            parse_environmental_stress_screening_vibration(data["testaction"][i],i);
        }
        if(data["testaction"][i]["type"] == "environmental stress screening run-in")
        {
            parse_environmental_stress_screening_runin(data["testaction"][i],i);
        }
        if(data["testaction"][i]["type"] == "write eeprom")
        {
            parse_write_eeprom(data["testaction"][i],i);
        }
        if(data["testaction"][i]["type"] == "temp servo internal")
        {
            parse_temp_servo_internal(data["testaction"][i],i);
        }
        if(data["testaction"][i]["type"] == "current servo internal")
        {
            parse_current_servo_internal(data["testaction"][i],i);
        }
        if(data["testaction"][i]["type"] == "voltage servo internal")
        {
            parse_voltage_servo_internal(data["testaction"][i],i);
        }
        if(data["testaction"][i]["type"] == "continuous movement")
        {
            parse_continuous_movement(data["testaction"][i],i);
        }
        if(data["testaction"][i]["type"] == "velocity")
        {
            parse_velocity(data["testaction"][i],i);
        }
        if(data["testaction"][i]["type"] == "gear train stress test")
        {
            parse_gear_train_stress_test(data["testaction"][i],i);
        }
        if(data["testaction"][i]["type"] == "current")
        {
            parse_current(data["testaction"][i],i);
        }
        if(data["testaction"][i]["type"] == "current spike")
        {
            parse_current_spike(data["testaction"][i],i);
        }
        if(data["testaction"][i]["type"] == "linearity")
        {
            parse_linearity(data["testaction"][i],i);
        }
    }

    // j.at("first").get_to(name.first);
    //std::cout << data.dump(4) << std::endl;
}
