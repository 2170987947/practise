//定义栈的数据结构，请在该类型中实现一个能够得到栈的最小元素的 min 函数在该栈中，调用 min、push 及 pop 的时间复杂度都是 O(1)。 
//
// 
//
// 示例: 
//
// MinStack minStack = new MinStack();
//minStack.push(-2);
//minStack.push(0);
//minStack.push(-3);
//minStack.min();   --> 返回 -3.
//minStack.pop();
//minStack.top();      --> 返回 0.
//minStack.min();   --> 返回 -2.
// 
//
// 
//
// 提示： 
//
// 
// 各函数的调用总次数不超过 20000 次 
// 
//
// 
//
// 注意：本题与主站 155 题相同：https://leetcode-cn.com/problems/min-stack/ 
//
// Related Topics 栈 设计 👍 389 👎 0

#include "include/headers.h"
using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class MinStack {
public:
    stack<int> s1;
    stack<int> s2;
    /** initialize your data structure here. */
    MinStack() {

    }
    
    void push(int x) {
        s1.push(x);
        if (s2.empty()) {
            s2.push(x);
        } else{
            s2.push(:: min(x, s2.top()));
        }
    }
    
    void pop() {
        if (s1.empty()) {
            return;
        }
        s1.pop();
        s2.pop();
    }
    
    int top() {
        if (s1.empty()) {
            return -1;
        }
        return s1.top();
    }
    
    int min() {
        if (s1.empty()) {
            return -1;
        }
        return s2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */
//leetcode submit region end(Prohibit modification and deletion)

int main()
{
    MinStack s;
    return 0;
}