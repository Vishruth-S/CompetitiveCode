// Logic
// The required solution can be obtained by setting input array which is some sets of values
// Get the values and use for loop to iterate the array values
// check for two adjacent elements from the array that their product equals certain number,
// for different test case

function adjacentElementsProduct(inputArray) {
    var arr = inputArray;
    //variable x and y are the two adjacent elements with default value as zero
      var x = 0;
      var y = 0;
      var p = Number.MIN_SAFE_INTEGER;
      //arr.length gets all the values in the array, then check on after the other
      for (var i = 0; i < arr.length; i++) {
        //take both x and y, increase the value of x by 1 for y for all test cases
        x = arr[i];
        y = arr[i + 1];
        //if the product of x and y is greater than or equal to p
        if (x * y > p) {
          p = x * y;
        };
      };
      // returns the value of p which is the product of x and y correct values
      return p;
    }