class Solution
{
private:
   int findLength(ListNode *head)
   {
      ListNode *start = head;
      int count = 0;
      while (start != NULL && count < INT_MAX)
      {
         count++;
         start = start->next;
      }
      cout << "count" << count << endl;
      return count;
   }

public:
   ListNode *swapNodes(ListNode *head, int k)
   {
      if (head->next == NULL)
      {
         return head;
      }
      int p1 = k;
      int p2 = k;
      int p3 = k;
      int p4 = k;
      int len = findLength(head);

      // cout<<len<<endl;
      ListNode *temp1 = head;
      ListNode *temp2 = head;
      ListNode *temp3 = head;

      while (p1 - 1 != 0 && temp1 != NULL)
      {
         temp1 = temp1->next;
         p1--;
      }
      cout << "temp1 value " << temp1->val;
      // int x=temp1->val;
      ListNode *node1 = new ListNode(temp1->val);
      int total = len - p2;
      while (total != 0 && temp2 != NULL)
      {
         temp2 = temp2->next;
         total--;
      }

      ListNode *node2 = new ListNode(temp2->val);
      cout << "Node2 value  " << temp2->val << endl;

      if (k == 1)
      {
         ListNode *ok = head;
         node2->next = head->next;
         head = node2;
         free(ok);
      }
      else
      {

         while (temp3 != NULL && p3 - 2 != 0)
         {
            temp3 = temp3->next;
            p3--;
         }

         // cout<<"hello"<<q<<endl

         node2->next = temp3->next->next;
         temp3->next = node2;
      }

      ListNode *temp4 = head;

      if (k == 1)
      {
         while (temp4->next->next != NULL)
         {
            temp4 = temp4->next;
         }
         temp4->next = node1;
      }

      else
      {

         int L = len - p4 - 1;
         cout << L << "last" << endl;

         while (temp4 != NULL && L != 0)
         {
            temp4 = temp4->next;
            L--;
         }

         node1->next = temp4->next->next;
         temp4->next = node1;
      }

      return head;
   }
};