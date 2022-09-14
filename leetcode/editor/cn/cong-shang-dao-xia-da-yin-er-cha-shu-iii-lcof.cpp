//请实现一个函数按照之字形顺序打印二叉树，即第一行按照从左到右的顺序打印，第二层按照从右到左的顺序打印，第三行再按照从左到右的顺序打印，其他行以此类推。 
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
//  [20,9],
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
// Related Topics 树 广度优先搜索 二叉树 👍 253 👎 0

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr) {
            return ans;
        }
        queue<TreeNode*> queue;
        queue.push(root);
        bool flag = true;
        while (!queue.empty()) {
            int size = queue.size();
            deque<int> deque;
            for (int i = 0; i < size; i++) {
                auto t = queue.front();
                queue.pop();
                if (flag) {
                    deque.push_back(t->val);
                } else {
                    deque.push_front(t->val);
                }
                if (t->left) {
                    queue.push(t->left);
                }
                if (t->right) {
                    queue.push(t->right);
                }
            }
            flag = !flag;
            ans.push_back(vector<int>(deque.begin(), deque.end()));
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