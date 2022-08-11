#include <vector>
#include <string>

#include <classes/CMeasurement.hpp>

class Report
{
    public:

        std::vector<Measurement> measurements;

        Report()
        {
            m_id = 0;

        }

        unsigned long long getID(){ return m_id; }
        std::string getStartDate(){ return m_started; }
        std::string getEndDate(){ return m_finished; }
        std::string getSnumServo(){ return m_snum_servo; }
        std::string getSnumPcb(){ return m_snum_pcb; }
        std::string getStatus(){ return m_status; }
        //std::vector<Measurement> getMeasurement(){ return measurements; }

        void setID(unsigned long long id){ m_id = id; }
        void setStartDate(std::string started){ m_started = started; }        
        void setEndDate(std::string finished){ m_finished = finished; }
        void setSnumServo(std::string snum_servo){ m_snum_servo = snum_servo; }
        void setSnumPcb(std::string snum_pcb){ m_snum_pcb = snum_pcb; }
        void setStatus(std::string status){ m_status = status; }

    private:

        unsigned long long m_id;
        std::string m_started;
        std::string m_finished;
        std::string m_snum_servo;
        std::string m_snum_pcb;
        std::string m_status;
};