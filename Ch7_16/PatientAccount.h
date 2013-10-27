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

	double getDailyRate() const;
	double getTotalCharges(double medicationCharges, double surgeryCharges);
	int getDaysSpent()  const;
};

