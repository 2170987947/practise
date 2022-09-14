//输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历结果。如果是则返回 true，否则返回 false。假设输入的数组的任意两个数字都互不相同。 
//
// 
//
// 参考以下这颗二叉搜索树： 
//
//      5
//    / \
//   2   6
//  / \
// 1   3 
//
// 示例 1： 
//
// 输入: [1,6,3,2,5]
//输出: false 
//
// 示例 2： 
//
// 输入: [1,3,2,6,5]
//输出: true 
//
// 
//
// 提示： 
//
// 
// 数组长度 <= 1000 
// 
//
// Related Topics 栈 树 二叉搜索树 递归 二叉树 单调栈 👍 607 👎 0

#include "include/headers.h"
using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool verifyPostorder(vector<int>& postorder) {
        // 二叉搜索树的中序遍历结果是有序的，后序遍历根的左边小于根，右边大于根
        if (postorder.size() == 0) {
            return true;
        }
        return helper(postorder, 0, postorder.size() - 1);
    }

private:
    bool helper(vector<int> arr, int l, int r) {
        if (l >= r) {
            return true;
        }
        int i = l;
        while (arr[r] > arr[i]) {
            i++;
        }
        int m = i - 1;
        while (arr[r] < arr[i]) {
            i++;
        }
        return i == r && helper(arr, l, m) && helper(arr, m + 1, r - 1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main()
{
    Solution s;
    return 0;
}