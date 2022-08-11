#include <string>

#include <ITestAction.hpp>

namespace volz
{
    class Velocity : public ITestAction
    {
        public:
            Velocity() :    m_name("Velocity"),
                            m_start_pos(0.0),
                            m_end_pos(0.0),
                            m_limit_min(0.0),
                            m_limit_max(0.0),
                            m_value(0.0)
                            {}

            // Getter
            unsigned long long getID(){ return m_id; }
            std::string getName(){ return m_name; }
            std::string getType(){ return m_json_type; }
            double getStartPos(){ return m_start_pos; }
            double getEndPos(){ return m_end_pos; }
            double getLimitMin(){ return m_limit_min; }
            double getLimitMax(){ return m_limit_max; }
            double getValue(){ return m_value; }

            // Setter
            void setID(unsigned long long id){ m_id = id; }
            void setType(std::string type){ m_json_type = type; }
            void setStartPos(double startpos){ m_start_pos = startpos; }
            void setEndPos(double endpos){ m_end_pos = endpos; }
            void setLimitMin(double min){ m_limit_min = min; }
            void setLimitMax(double max){ m_limit_max = max; }
            void setValue(double value){ m_value = value; }

            // Member-Functions
            void printDetails(void);

        private:
            unsigned long long m_id;
            std::string m_name;
            std::string m_json_type;
            double m_start_pos;
            double m_end_pos;
            double m_limit_min;
            double m_limit_max;
            double m_value;
    };
}
