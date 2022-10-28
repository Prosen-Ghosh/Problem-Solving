/**
 * @param {number[][]} mat
 * @return {number}
 */
 var diagonalSum = function(mat) {
    let len =  mat.length;
    let col = mat[0].length;
    let sum = 0;
    
    for(let i = 0, j = 0; i < len; i++, j++){
        let secondary = col - i - 1;
        sum += mat[i][j];
        if(j !== secondary)sum += mat[i][secondary];
    }
    return sum;
};