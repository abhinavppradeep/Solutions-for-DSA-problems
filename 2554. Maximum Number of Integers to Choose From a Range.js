/**
 * @param {number[]} banned
 * @param {number} n
 * @param {number} maxSum
 * @return {number}
 */
var maxCount = function (banned, n, maxSum) {
  const banset = new Set(banned);
  let sum = 0;
  let count = 0;

  for (let i = 1; i <= n; i++) {
    if (!banset.has(i) && sum + i <= maxSum) {
      sum += i;
      count++;
    }
  }
  return count;
};
