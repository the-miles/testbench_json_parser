#include <string>

class CurrentPeak
{
    public:
    CurrentPeak()
    {
        m_name = "Current Peak";
    }

    unsigned long long getID(){ return m_id; }
    double getLimitMin(){ return m_limit_min; }
    double getLimitMax(){ return m_limit_max; }
    double getValue(){ return m_value; }
    std::string getName(){ return m_name; }

    void setID(unsigned long long id){ m_id = id; }
    void setLimitMin(double min){ m_limit_min = min; }
    void setLimitMax(double max){ m_limit_max = max; }
    void setValue(double value){ m_value = value; }
    
    private:
    unsigned long long m_id;
    std::string m_name;     
    double m_limit_min;
    double m_limit_max;
    double m_value;
};