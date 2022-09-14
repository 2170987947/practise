//给你二叉树的根节点 root 和一个整数目标和 targetSum ，找出所有 从根节点到叶子节点 路径总和等于给定目标和的路径。 
//
// 叶子节点 是指没有子节点的节点。 
//
// 
//
// 示例 1： 
//
// 
//
// 
//输入：root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
//输出：[[5,4,11,2],[5,8,4,5]]
// 
//
// 示例 2： 
//
// 
//
// 
//输入：root = [1,2,3], targetSum = 5
//输出：[]
// 
//
// 示例 3： 
//
// 
//输入：root = [1,2], targetSum = 0
//输出：[]
// 
//
// 
//
// 提示： 
//
// 
// 树中节点总数在范围 [0, 5000] 内 
// -1000 <= Node.val <= 1000 
// -1000 <= targetSum <= 1000 
// 
//
// 注意：本题与主站 113 题相同：https://leetcode-cn.com/problems/path-sum-ii/ 
//
// Related Topics 树 深度优先搜索 回溯 二叉树 👍 372 👎 0

#include "include/headers.h"
using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> arr;
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        helper(root, target);
        return ans;
    }
private:
    void helper(TreeNode* root, int target) {
        if (root == nullptr) {
            return;
        }
        arr.emplace_back(root->val);
        target -= root->val;
        if (target == 0 && root->left == nullptr && root->right == nullptr) {
            ans.emplace_back(arr);
        }
        helper(root->left, target);
        helper(root->right, target);
        arr.pop_back();
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main()
{
    Solution s;
    return 0;
}