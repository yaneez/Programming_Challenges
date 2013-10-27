#include "PatientAccount.h"

double PatientAccount::getDailyRate() const 
{
	return m_dailyRate;
}

double PatientAccount::getTotalCharges(double medicationCharges, double surgeryCharges)
{
	return ((getDaysSpent() * getDailyRate()) + medicationCharges + surgeryCharges);
}

int PatientAccount::getDaysSpent() const 
{
	return m_daysSpent;
}
