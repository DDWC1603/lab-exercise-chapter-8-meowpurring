//Student name: Anis Syazwani binti Md. Aini
//Matrix id: A17DW0731
//Public and private usage
#include<iostream>
using namespace std;

class Log
{
	public:
		const int LogLevelWarning = 0;
		const int LogLevelError = 1;
		const int LogLevelInfo = 2;
		
	private:
		int m_LogLevel = LogLevelInfo;
		
	public:
		void SetLevel(int Level)
		{
			m_LogLevel = Level;
		}
		void Warn(const char* message)
		{
			if(m_LogLevel>=LogLevelWarning)
			cout<<"[WARNING]: "<<message<<endl;
		}	
		void Error(const char* message)
		{
			if(m_LogLevel>=LogLevelError)
			cout<<"[ERROR]: "<<message<<endl;
		}	
		void Info(const char* message)
		{
			if(m_LogLevel>=LogLevelInfo)
			cout<<"[INFO]: "<<message<<endl;
		}	
};

int main()
{
Log oLog;
oLog.LogLevelWarning;
oLog.Warn("Hello!!!");
std::cin.get();	
}
