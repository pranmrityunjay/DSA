
/*class ListNode{
     public:
     int val;
     ListNode* next;
     ListNode (int data){
         this->val=data;
         next=nullptr;
     }
 };
*/
 class LinkedList{
     public:
     ListNode* head;
     LinkedList(){
         head=nullptr;
     }

     void addAtLast(int data){
         ListNode* new_node=new ListNode(data);
         if(head==nullptr){
             head=new_node;
         }
         else{
             ListNode* temp=head;
             while(temp->next!=nullptr){
                 temp=temp->next;
             }
             temp->next=new_node;
         }
     }

 };
 
class Solution {
    public:
    

    ListNode* mergeNodes(ListNode* head) {

        ListNode* start=head;
        int count=0;
        while(start!=nullptr){
            count++;
            start=start->next;
        }
        
        if(count>200000){
            return NULL;
        }

        ListNode* temp=head->next;
        ll1 =new LinkedList();
        while(temp!=nullptr){
            int count=0;
            if(temp->val != 0){
                count=temp->val;
                temp=temp->next;
                while(temp->val != 0 && temp!=nullptr){
                    count=count+temp->val;
                    temp=temp->next;
                }
            if (temp != nullptr) {
                    temp = temp->next;
                }
                
                ll1->addAtLast(count);     

            }
            else{
                temp=temp->next;
            }

        }


    return ll1->head;
        
    }
};