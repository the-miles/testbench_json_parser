#include <string>

#include <classes/CResistance.hpp>
#include <classes/CCurrentIdle.hpp>
#include <classes/CCurrentPeak.hpp>
#include <classes/CCurrentSpike.hpp>
#include <classes/CCurrentStandby.hpp>
#include <classes/CCurrentServoInternal.hpp>
#include <classes/CTempServoInternal.hpp>
#include <classes/CVoltageServoInternal.hpp>
#include <classes/CVelocity.hpp>
#include <classes/CLinearity.hpp>
#include <classes/CPositionDeviation.hpp>
#include <classes/CPowerSupplyVoltage>

class Measurement
{
    public:
        Measurement()
        {
            m_id = 0;
        }

        unsigned long long getID(){ return m_id; }
        std::string getStatus(){ return m_status; }
        CurrentIdle getCurrentIdle(){ return m_current_idle; }

        void setID(unsigned long long id){ m_id = id; }
        void setStatus(std::string status){ m_status = status; }
        void setCurrentIdle(CurrentIdle currentIdle){ m_current_idle = currentIdle; }
        void setCurrentIdleID(unsigned long long currentIdleID){m_current_idle.setID(currentIdleID);}


        std::string m_name;
        unsigned long long m_report_id;
        unsigned long long m_type_id;        
        unsigned long long m_rotation_id;
        unsigned long long m_interface_id;
        std::string m_performed;


        CurrentPeak m_current_peak;
        CurrentSpike m_current_spike;
        CurrentStandby m_current_standby;
        CurrentServoInternal m_current_servo_internal;        
        TempServoInternal m_temp_servo_internal;
        VoltageServoInternal m_voltage_servo_internal;
        Velocity m_velocity;
        PositionDeviation m_position_deviation;
        Linearity m_linearity;
        Resistance m_resistance;
        PowerSupplyVoltage m_power_supply_voltage;

    private:
        std::string m_status;
        unsigned long long m_id;        

        CurrentIdle m_current_idle;
};