//从上到下按层打印二叉树，同一层的节点按从左到右的顺序打印，每一层打印到一行。 
//
// 
//
// 例如: 给定二叉树: [3,9,20,null,null,15,7], 
//
//     3
//   / \
//  9  20
//    /  \
//   15   7
// 
//
// 返回其层次遍历结果： 
//
// [
//  [3],
//  [9,20],
//  [15,7]
//]
// 
//
// 
//
// 提示： 
//
// 
// 节点总数 <= 1000 
// 
//
// 注意：本题与主站 102 题相同：https://leetcode-cn.com/problems/binary-tree-level-order-
//traversal/ 
//
// Related Topics 树 广度优先搜索 二叉树 👍 249 👎 0

#include "include/headers.h"
using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    queue<TreeNode*> queue;
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr) {
            return ans;
        }
        queue.push(root);
        while (!queue.empty()) {
            int size = queue.size();
            ans.push_back(vector<int>());
            for (int i = 0; i < size; i++) {
                TreeNode* t = queue.front();
                queue.pop();
                ans.back().push_back(t->val);
                if (t->left) {
                    queue.push(t->left);
                }
                if (t->right) {
                    queue.push(t->right);
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main()
{
    Solution s;
    return 0;
}