#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->val = data;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    DoublyLinkedList(Node *head, Node *tail)
    {
        this->head = head;
        this->tail = tail;
    }

    void addAtStart(int data)
    {
        Node *new_node = new Node(data);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            Node *temp = head;
            temp->prev = new_node;
            new_node->next = temp;
            head = new_node;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

   
};


 vector<int> TargetSum(Node *head, Node *tail, int targetSum)
    {
        vector<int> ans(2, -1);
        
        while (head != tail)
        { 
            int sum = head->val + tail->val;
            if (sum == targetSum)
            {
                ans[0] = head->val;
                ans[1] = tail->val;
                return ans;
            }
            if (sum > targetSum)
            {
                tail = tail->prev;
            }
            else
            {
                head = head->next;
            }
        }

        return ans;
    }
int main()
{
    DoublyLinkedList *dll1 = new DoublyLinkedList();
    dll1->addAtStart(30);
    dll1->addAtStart(28);
    dll1->addAtStart(26);
    dll1->addAtStart(24);
    dll1->addAtStart(21);
    dll1->addAtStart(20);
    dll1->addAtStart(19);
    dll1->addAtStart(17);
    dll1->addAtStart(15);
    dll1->addAtStart(11);
    dll1->addAtStart(9);
    dll1->display();
    vector<int> ans = TargetSum(dll1->head, dll1->tail, 32);
    cout << ans[0] << " " << ans[1] << endl;
    // dll1->display();
}
