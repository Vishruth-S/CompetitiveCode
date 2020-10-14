def fizzbuzz(x):
	"""FizzBuzz challenge"""
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
