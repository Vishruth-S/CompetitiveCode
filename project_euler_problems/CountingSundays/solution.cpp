#include <iostream>
// counting sundays from Project Euler

// using enum here so that we can use descriptive
// month names instead of numbers 0, 1, ... 11 when
// accessing array of days per month
enum Month
{
    Jan, Feb, Mar, Apr, May,Jun,
    Jul, Aug, Sep, Oct, Nov, Dec
};

// lets us use descriptive names for day of the week
enum DayOfWeek
{
    Mon, Tues, Wed, Thurs, Fri, Sat, Sun
};

int main()
{
    int total {0};

    int year {1900};
    int month {Jan};
    int day {1};
    int weekday {Mon};
    int daysInMonth[12] {31, 28, 31, 30, 31, 30,
                         31, 31, 30, 31, 30, 31};

    while (year < 2001){
        // flip calendar to next year after Dec 31st
        if (day == 32 && month == Dec){
            year++;
            day = 1;
            month = Jan;

            // on centuries divisible by 400 or non-centuries divisible
            // by four, February has 29 days
            if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)){
                daysInMonth[Feb] = 29;
            }
            // on every other year it has 28
            else {
                daysInMonth[Feb] = 28;
            }
        }

        // changes to the first of the next month
        // if the day count is greater than allowed
        // for the current month
        if (day > daysInMonth[month]){
            month++;
            day = 1;
        }
        
        // the day after Sunday is set to Monday
        if (weekday > Sun){
            weekday = Mon;
        }

        // counts days after 1900 where Sunday is on the 1st
        if (year > 1900 && weekday == Sun && day == 1){
            total++;
        }


        // add one day to start the next loop
        day++;
        weekday++;
    }

    std::cout << "Total number of days counted: " << total << std::endl;
}

