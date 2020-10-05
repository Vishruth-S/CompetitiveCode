// This function will take a matrix as a parameter : example : [[1,2,3],[4,5,6],[7,8,9]]
const rotate = (matrix) => {

    // we define row variable which will iterate through the rows of the matrix;
    // we define col variable which will iterate through the columns of the matrix;
    // we define l variable which is equal to the length of the matrix, equal to 3 in this example;
    // we define swap variable which will hold the first element of our matrix
    let row = 0,
        col = 0,
        l = matrix.length,
        swap

    //loop till the half length of the matrix
    for (row = 0; row < Math.floor(l / 2); row++) {
        // The Math.ceil() function always rounds a number up to the next largest integer.
        for (col = 0; col < Math.ceil(l / 2); col++) {

            //the swap variable will contain our first value of the matrix [0][0]
            swap = matrix[row][col]

            //the first element of the matrix [0][0] will be replaced by the last element of the first column [2][0]
            matrix[row][col] = matrix[l - col - 1][row]

            //the first column [2][0] will be replaced by the last element of the last column [2][2]
            matrix[l - col - 1][row] = matrix[l - row - 1][l - col - 1]

            //last element of the last column [2][2] will be replaced by the first element of the last column [0][2]
            matrix[l - row - 1][l - col - 1] = matrix[col][l - row - 1]

            //first element of the last column [0][2] will be replaced by the first element of the first column [0][0]
            matrix[col][l - row - 1] = swap

        }
    }
    // this logic of replacing elements will be applied to all the values in the matrix till we get the rotated matrix.

    //returning the rotated matrix, in this example it's : [[7,4,1],[8,5,2],[9,6,3]]
    return matrix

};