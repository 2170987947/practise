//
// Created by MF on 2022/9/13.
//

#ifndef PRACTISE_LISTNODE_H
#define PRACTISE_LISTNODE_H


#include <iostream>
#include <vector>
#include <initializer_list>

namespace LeetCode
{
    struct ListNode
    {
        int val;
        ListNode *next;
        ListNode(int x = 0, ListNode *p = nullptr) : val(x), next(nullptr){};
    };

    void print_list(ListNode *head);
    bool is_same_list(ListNode *l1, ListNode *l2);

    class List
    {
    public:
        ListNode *head;

    private:
        ListNode *tail;

    public:
        List();
        List(std::initializer_list<int> l);
        ~List();
        void insert(int x);
        void print();
        bool operator==(const List &l1) const;
    };
} // namespace LeetCode

#endif //PRACTISE_LISTNODE_H
