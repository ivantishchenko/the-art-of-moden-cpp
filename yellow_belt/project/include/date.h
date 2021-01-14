#pragma once

#include <memory>
#include <iostream>

using namespace std;

class Date {
public:
    Date();
    Date(int year, int month, int day);
    int GetYear() const;
    int GetMonth() const;
    int GetDay() const;
    void SetYear(int year);
    void SetMonth(int month);
    void SetDay(int day);
private:
    int year_;
    int month_;
    int day_;
};

ostream& operator<<(ostream& out, const Date& date);
istream& operator>>(istream& in, Date& date);
bool operator<(const Date& lhs, const Date& rhs);

Date ParseDate(istream& is);