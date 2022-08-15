#include <string>

#include <ITestAction.hpp>

namespace volz
{
    class Baudrate : public ITestAction
    {
        public:
            Baudrate() :    m_name("Baudrate"),
                            m_target("main"),
                            m_limit_min(4800),
                            m_limit_max(2000000),
                            m_value(115200)
                            {}

            // Getter
            unsigned long long getID(){ return m_id; }
            std::string getName(){ return m_name; }
            std::string getType(){ return m_json_type; }
            std::string getTarget(){ return m_target; }
            unsigned int getLimitMin(){ return m_limit_min; }
            unsigned int getLimitMax(){ return m_limit_max; }
            unsigned int getValue(){ return m_value; }

            // Setter
            void setID(unsigned long long id){ m_id = id; }
            void setType(std::string type){ m_json_type = type; }
            void setTarget(std::string target){ m_target = target; }
            void setLimitMin(unsigned int min){ m_limit_min = min; }
            void setLimitMax(unsigned int max){ m_limit_max = max; }
            void setValue(unsigned int value){ m_value = value; }

            // Member-Functions
            void printDetails(void);

        private:
            unsigned long long m_id;
            std::string m_name;
            std::string m_json_type;
            std::string m_target;
            unsigned int m_limit_min;
            unsigned int m_limit_max;
            unsigned int m_value;
    };
}
