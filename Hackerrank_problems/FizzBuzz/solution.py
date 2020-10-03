if __name__ == '__main__':
    result = ["FizzBuzz" if number%3 == 0 and number%5 ==0 else ("Fizz" if number%3==0 else ("Buzz" if number%5 == 0 else number)) for number in range(1, 101)]
    for i in result:
        print(i)
