/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    
     Node* dfs(Node* head){
         
        Node *child, *prev = NULL;
         
        while(head != NULL){
            
            if(head->child){
                Node* next = head->next;
                head->next = head->child;
                head->child->prev = head;
                
                child = dfs(head->child);
                
                if(next) next->prev = child;
                
                child->next = next;
                head->child = NULL;
                prev = child;
                head = child->next;
                
            } else {
                prev = head;
                head = head->next;
            }
        }
        return prev;
    }
    
    Node* flatten(Node* head) {
        dfs(head);
        return head;
    }
};
