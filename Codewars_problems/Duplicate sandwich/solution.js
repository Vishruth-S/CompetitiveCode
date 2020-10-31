function duplicateSandwich(input) {
    //input can be string or array
    let start = 0;
    let end = 0;
    for (let i = 0; i < input.length; i++) {
        for (let j = i + 1; j < input.length; j++) {
            if (input[i] === input[j]) {
                start = i;
                end = j;
            }
        }
    }
    //in the for loop we find the recurring element
    //start is the index of this element's first appearance
    //end is the index of this element's second appearance 

    return input.slice(start + 1, end);
    //slice the string or array
}

console.log(duplicateSandwich(["None", "Hello", "Example", "hello", "None", "Extra"]));
//the recurring element is "None"
//start = 0
//end = 4
//slice from 0 to 4 (exclusive)