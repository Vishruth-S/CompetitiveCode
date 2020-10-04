'''
Used one liner if else statements
print FizzBuzz if number is divisible by 3 and 5
print Fizz if number is divisible by 3
print Buzz if number is divisible by 5
otherwise print number as it is
'''
if __name__ == '__main__':
    result = ["FizzBuzz" if number%3 == 0 and number%5 ==0 else ("Fizz" if number%3==0 else ("Buzz" if number%5 == 0 else number)) for number in range(1, 101)]
    for i in result:
        print(i)
