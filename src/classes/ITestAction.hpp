#include <string>

namespace volz
{
    class ITestAction
    {
        public:
            // contructor with initialisierungsliste
            ITestAction() : m_sequence(0), m_comment("none") {}

            // virtal destructor to enable polymorphy´
            virtual ~ITestAction(){}

            // Setter
            void setSequence(unsigned int seq){ m_sequence = seq; }
            void setComment(std::string comment){ m_comment = comment; }

            // Getter
            unsigned int getSequence(void){ return m_sequence; }
            std::string getComment(void){ return m_comment; }

        protected:
            // virtual und =0 sorgt dafür das in der abgeleiteten Klasse printDetails() deklariert werden muss
		    virtual void printDetails() = 0;

        private:
            unsigned int m_sequence;
            std::string m_comment;
    };
}
