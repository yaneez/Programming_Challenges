#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
class Date
{
private:
    int m_day,
        m_month,
        m_shortYear,
        m_year;

public:
    Date()
    {
        m_day = 1;
        m_month = 1;
        m_year = 2001;
    }

    Date(int day, int month, int year);

    const int getDay();
    const int getMonth();
    const int getYear();

    int makeShortYear();
    void makeMonthName(int month);

    void showShortDate();
    void showLongDate();
    void showEuroDate();
};
#endif // DATE_H_INCLUDED
