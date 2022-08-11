#include <string>

#include <ITestAction.hpp>

namespace volz
{

class Resistance : public ITestAction
{
    public:
        // Constructor
        Resistance()
        {
            m_name = "Resistance";
        }

        // Getter
        unsigned long long getID(){ return m_id; }
        std::string getType(){ return m_json_type; }
        double getLimitMin(){ return m_limit_min; }
        double getLimitMax(){ return m_limit_max; }
        double getValue(){ return m_value; }
        std::string getPath(){ return m_path; }
        std::string getName(){ return m_name; }

        // Setter
        void setID(unsigned long long id){ m_id = id; }
        void setType(std::string type){ m_json_type = type; }
        void setLimitMin(double min){ m_limit_min = min; }
        void setLimitMax(double max){ m_limit_max = max; }
        void setValue(double value){ m_value = value; }
        void setPath(std::string path){ m_path = path; }

        // Member-Functions
        void printDetails(void);

    private:
        unsigned long long m_id;
        std::string m_name;
        std::string m_json_type;
        double m_limit_min;
        double m_limit_max;
        double m_value;
        std::string m_path;
};

}
