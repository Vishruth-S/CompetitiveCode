# In Python, a string of text can be aligned left, right and center.
# .ljust(width)
# This method returns a left aligned string of length width.
# >>> width = 20
# >>> print 'HackerRank'.ljust(width,'-')
# HackerRank----------  
# .center(width)
# This method returns a centered string of length width.
# >>> width = 20
# >>> print 'HackerRank'.center(width,'-')
# -----HackerRank-----
# .rjust(width)
# This method returns a right aligned string of length width.
# >>> width = 20
# >>> print 'HackerRank'.rjust(width,'-')
# ----------HackerRank

thickness = int(input()) #This must be an odd number
c = 'H'

#Top Cone
for i in range(thickness):
    print((c*i).rjust(thickness-1)+c+(c*i).ljust(thickness-1))

#Top Pillars
for i in range(thickness+1):
    print((c*thickness).center(thickness*2)+(c*thickness).center(thickness*6))

#Middle Belt
for i in range((thickness+1)//2):
    print((c*thickness*5).center(thickness*6))

#Bottom Pillars
for i in range(thickness+1):
    print((c*thickness).center(thickness*2)+(c*thickness).center(thickness*6))

#Bottom Cone
for i in range(thickness):
    print(((c*(thickness-i-1)).rjust(thickness)+c+(c*(thickness-i-1)).ljust(thickness)).rjust(thickness*6))

