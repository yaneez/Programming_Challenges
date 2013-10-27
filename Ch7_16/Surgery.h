#pragma once
class Surgery
{
private:
	double m_surgeryHead,
		   m_surgeryShoulder,
		   m_surgeryTorso,
		   m_surgeryThigh,
		   m_surgeryLeg;
public:
	Surgery()
	{
		m_surgeryHead = 15000.00;
		m_surgeryShoulder = 2500.00;
		m_surgeryTorso = 1500.00;
		m_surgeryThigh = 3750.00;
		m_surgeryLeg = 750.00;
	}

	double getSurgeryHead() const;
	double getSurgeryShoulder() const;
	double getSurgeryTorso() const;
	double getSurgeryThigh() const;
	double getSurgeryLeg() const;
};