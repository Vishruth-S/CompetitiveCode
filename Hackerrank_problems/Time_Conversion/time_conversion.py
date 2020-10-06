# Taking input of time and splitting that into hour, minutes, and seconds.
h, m, s = input().split(':')

# s[-2:] is to get status of time i.e. AM or PM.

if s[-2:] == 'AM' and h == '12':
    ## manage 12 AM hour.
    print(f'{0}{0}:{m}:{s[:-2]}')

elif s[-2:] == 'AM':
    ## manage day time.
    print(f'{h}:{m}:{s[:-2]}')

elif s[-2:] == 'PM' and h == '12':
    ## manage 12 PM hour.
    print(f'{h}:{m}:{s[:-2]}')

elif s[-2:] == 'PM':
    ## manage night time.
    print(f'{int(h)+12}:{m}:{s[:-2]}')
