#@Input: A year of type numeric

#@Brief:
# The problem with the calendar resides in the year 1918, where the calendar was changed
# So we have this breakpoint as an exception
# Then we proceed to check the leap years in Gregorian and Julian 
# Else we will return 13.09. + given year.

#@Output: A string with the day of programer


def day_of_programmer(year)
    if year == 1918                    
        return '26.09.1918'
    elsif ((year <= 1917) & (year%4 == 0)) or ((year > 1918) & (year%400 == 0 or ((year%4 == 0) & (year%100 != 0))))
        return '12.09.'+year.to_s      
    else
        return '13.09.'+year.to_s
    end
end

puts (day_of_programmer(2017))