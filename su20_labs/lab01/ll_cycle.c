#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node *t = head;
    node *h = head;
    while (h != NULL) {
        if (h->next == NULL) break;
        h = h->next->next;
        if (h == NULL) break;
        t = t->next;
        if (h == t) return 1;
    } 
    return 0;
}