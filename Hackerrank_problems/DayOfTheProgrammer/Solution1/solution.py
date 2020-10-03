# Complete the dayOfProgrammer function below.
def dayOfProgrammer(year):
    #Check if the year is before or after 1918
    if year > 1918:  
        #If the year is after 1918

        #Check if the year is leap
        if (year%400==0) or ((year%4==0)and (year%100!=0)):
            #If the year is leap
            return '12.09.'+str(year)
        else:
            #If the year is not leap
            return '13.09.'+str(year)
    elif year < 1918:
        #If the year is before 1918

        #Check if the year is leap
        if (year%4==0):
            #If the year is leap
            return '12.09.'+str(year)
        else:
            #If the year is leap
            return '13.09.'+str(year)
    else:
        #If the year is 1918
        return '26.09.1918'