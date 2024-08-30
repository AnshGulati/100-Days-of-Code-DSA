/*
Question "21. Merge Two Sorted Lists" on leetcode
You are given the heads of two sorted linked lists list1 and list2. Merge the two lists into one sorted list. The
list should be made by splicing together the nodes of the first two lists. Return the head of the merged linked
list.
*/

#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode dummy(0);
    ListNode *tail = &dummy;

    while (list1 != nullptr && list2 != nullptr)
    {
        if (list1->val <= list2->val)
        {
            tail->next = list1;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    if (list1 != nullptr)
    {
        tail->next = list1;
    }
    else
    {
        tail->next = list2;
    }

    return dummy.next;
}

// Function to insert nodes in the linked list
ListNode *insertNodes(int n)
{
    if (n == 0)
        return nullptr;
    int val;
    cin >> val;
    ListNode *head = new ListNode(val);
    ListNode *current = head;
    for (int i = 1; i < n; i++)
    {
        cin >> val;
        current->next = new ListNode(val);
        current = current->next;
    }
    return head;
}

// Function to print the linked list
void printList(ListNode *node)
{
    while (node != nullptr)
    {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

int main()
{
    int n1, n2;

    cout << "Enter the number of elements in the first list: ";
    cin >> n1;
    cout << "Enter the elements of the first list in sorted order: ";
    ListNode *list1 = insertNodes(n1);

    cout << "Enter the number of elements in the second list: ";
    cin >> n2;
    cout << "Enter the elements of the second list in sorted order: ";
    ListNode *list2 = insertNodes(n2);

    ListNode *mergedList = mergeTwoLists(list1, list2);

    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}