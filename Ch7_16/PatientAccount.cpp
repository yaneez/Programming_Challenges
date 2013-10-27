#include "PatientAccount.h"

const double PatientAccount::getDailyRate()
{
	return m_dailyRate;
}

double PatientAccount::getTotalCharges(double medicationCharges, double surgeryCharges)
{
	return ((getDaysSpent() * getDailyRate()) + medicationCharges + surgeryCharges);
}

const int PatientAccount::getDaysSpent()
{
	return m_daysSpent;
}
