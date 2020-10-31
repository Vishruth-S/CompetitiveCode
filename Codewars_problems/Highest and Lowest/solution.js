function highAndLow(numbers){
    //numbers is a string contains numbers separated by a space
    const array = numbers.split(" ");
    //array contains the numbers from the string (characters, for example '4')
    for (let i = 0; i < array.length; i++) {
      array[i] = parseInt(array[i]);
    }
    //in the for loop convert the characters to integer
    const max = Math.max(...array);
    const min = Math.min(...array);
    //max and min are the maximum and minimum elements of the array
    return max + ' ' + min;    
  }

console.log(highAndLow("4 0 -214 542 -64 1 -6"));
//array = ['4', '0', '-214', '542', '-64', '1', '6']
//after the for loop array = [4, 0, -214, 542, -64, 1, 6]
//max = 542
//min = -214