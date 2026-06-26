#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    node *slow = head, *fast = head;
    
   
    while (fast && fast->next) {
        
       
        fast = fast->next->next;
        slow = slow->next;
        
        
        if (slow == fast) {
            return 1;
        }
    }
    
   
    return 0;
}