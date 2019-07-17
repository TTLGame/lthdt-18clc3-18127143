#include "Time.h"

Time::Time()
{
	time_t Now = time(0);
	tm local;
	localtime_s(&local, &Now);
	this->m_hour = local.tm_hour;
	this->m_minute = local.tm_min;
	this->m_second = local.tm_sec;
}

Time::Time(int hour, int min, int sec)
{
	this->m_hour = hour;
	this->m_minute = min;
	this->m_second = sec;
}

Time::~Time()
{

}
string GMTTime::ToString(int GMT_Hour)
{
	m_hour  += GMT_Hour;
	if (m_hour >= 24) 
		m_hour -= 24;
	stringstream writer;
	if (m_hour < 10) writer << "0";
	writer << m_hour << ":";
	if (m_minute < 10) writer << "0";
	writer << m_minute << ":";
	if (m_second < 10) writer << "0";
	writer << m_second;
	return writer.str();
}