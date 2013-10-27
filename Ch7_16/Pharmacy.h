#pragma once
#include <iostream>
class Pharmacy
{
private:
	double m_pillMotrin,
		   m_pillTylenol,
		   m_pillVicodin,
		   m_pillBlue,
		   m_pillRed;
public:
	Pharmacy()
	{ 
		m_pillMotrin = 50.00; 
		m_pillTylenol = 25.00; 
		m_pillVicodin = 75.00;
		m_pillBlue = 100.00;
		m_pillRed = 10.00;
	}

	const double getPillMotrin();
	const double getPillTylenol();
	const double getPillVicodin();
	const double getPillBlue();
	const double getPillRed();
};

