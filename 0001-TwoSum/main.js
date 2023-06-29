/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */

var twoSum = function (nums, target) {
  i = 0;

  while (i < nums.length) {
    j = i + 1;

    while (j < nums.length) {
      if (nums.at(i) + nums.at(j) == target) return [i, j];

      j++;
      continue;
    }

    i++;
    continue;
  }
};
