/**
 * @param {string} s
 * @param {number[]} spaces
 * @return {string}
 */
var addSpaces = function(s, spaces) {
    let result = [];
    let prev = 0;

    for(let index of spaces){
        result.push(s.slice(prev,index));
        result.push(" ");
        prev = index;
    }


    result.push(s.slice(prev));
    return result.join("");
};