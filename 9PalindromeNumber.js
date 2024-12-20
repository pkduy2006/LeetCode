/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    const y = x.toString();
    const z = y.split('').reverse().join('');
    if(z == y)
        return true;
    else
        return false;
};