#pragma once
class PatientAccount
{
private:
	double m_dailyRate;

	int m_daysSpent;

public:
	PatientAccount(int daysSpent)
	{
		m_daysSpent = daysSpent;
		m_dailyRate = 75.00;
	}

	const double getDailyRate();
	double getTotalCharges(double medicationCharges, double surgeryCharges);
	const int getDaysSpent();
};

