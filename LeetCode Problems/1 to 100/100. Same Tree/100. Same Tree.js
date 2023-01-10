/* function TreeNode(val, left, right) {
  this.val = val === undefined ? 0 : val;
  this.left = left === undefined ? null : left;
  this.right = right === undefined ? null : right;
} */

/**
 * @param {TreeNode} p
 * @param {TreeNode} q
 * @return {boolean}
 */
const isSameTree = (p, q) => {
  const traverse = (node, acc = []) => {
    acc.push(node?.val || null);
    if (node) traverse(node?.left, acc);
    if (node) traverse(node?.right, acc);
    return acc;
  };

  const array1 = traverse(p);
  const array2 = traverse(q);

  return JSON.stringify(array1) === JSON.stringify(array2);
};
