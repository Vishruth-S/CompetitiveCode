def fizzbuzz(x):
"""FizzBuzz challenge
scan through 1 to 100 and tell which numbers are fizz, buzz, or fizzbuzz
fizz - a number divisible by 3
buzz - a number divisible by 5
fizzbuzz - a number divisible by 5 and 3
"""
    for i in range(x):
        i += 1
	if i % 3 == 0 and i % 5 == 0:
            print("fizzbuzz")
	elif i % 3 == 0:
            print("fizz")				
        elif i % 5 == 0:
            print("buzz")
        else:
            print(i)
			
			
fizzbuzz(100)
