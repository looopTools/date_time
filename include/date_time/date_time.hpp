#pragma once

#include <cstdint>
namespace date_time
{

class date_time
{



    uint8_t hours() const { return _hours; }

    void hours(const uint8_t h)
    {
        if (0 <= h && h <= 24 )
        {
            _hours = h;
        }
    }

    uint8_t minutes() const { return _minutes; }

    void minutes(const uint8_t min)
    {
        if (0 <= min && min <= 59)
        {
            _minutes = min;
        }

    }

    uint8_t seconds() const { return _seconds; }

    void seconds(const uint8_t sec)
    {
        if (0 <= sec && sec <= 59)
        {
            _seconds = sec;
        }
    }

    uint64_t year() const  { return _year; }
    uint8_t month() const { return _month; }
    uint8_t day() const {return _day; }

private:

    uint8_t _hours;
    uint8_t _minutes;
    uint8_t _seconds;

    uint64_t _year;
    uint8_t _month;
    uint8_t _day;


};
}
