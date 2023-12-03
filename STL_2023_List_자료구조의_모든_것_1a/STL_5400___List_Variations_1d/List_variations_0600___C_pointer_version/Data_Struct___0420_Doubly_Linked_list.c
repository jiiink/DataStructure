#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct dnode {
    int data;
    struct dnode *next, *prev;
} DNODE;

DNODE *InsFront (DNODE *, int);
DNODE *InsBefore(DNODE *, int, int);
DNODE *DelNode  (DNODE *, int);
void  Display(DNODE *);

int main() {
    DNODE *start = NULL; /* Main Program */
    int opn, elem, info, n, i;

    do {
        printf("\n  ### Doubly Linked List Operations ### nn");
        printf("\n  Press 1-Creation with front Insertion");
        printf("\n        2-Insert Before a Given Node");
        printf("\n        3-Delete a Given Node");
        printf("\n        4-Display");
        printf("\n        5-Exitn");
        printf("\n        Your option ? ");
        scanf("%d", &opn);
        switch (opn) {
        case 1:
            printf("\n nHow Many Nodes ?");
            scanf("%d", &n);
            for (i = 1; i <= n; i++) {
                printf("\n Read the Data for Node %d ?", i);
                scanf("%d", &elem);
                start = InsFront(start, elem);
            }
            printf("\n Doubly Linked list with %d nodes is ready toUse!!n", n);
            break;
        case 3:
            printf(" Read the Info of the Node to be deleted ? ");
            scanf("%d", &info);
            start = DelNode(start, info);
            break;
        case 2:
            printf(" Read the Data for New noden");
            scanf("%d", &elem);
            printf(
                " Read the Info of the Node(to the left of which new node tobe inserted ? ");
            scanf("%d", &info);
            start = InsBefore(start, elem, info);
            break;
        case 4:
            printf(" Doubly Linked List is n");
            Display(start);
            break;
        case 5:
            printf("\n n Terminating nn");
            break;
        default:
            printf("\n nInvalid Option !!! Try Again !! nn");
            break;
        }
        printf("\n nnn  Press a Key to Continue . . . ");
        getch();
    } while (opn != 5);
}

DNODE *InsFront(DNODE *start, int elem) {
    DNODE *temp;
    temp = (DNODE *) malloc(sizeof(DNODE));
    if (temp == NULL) {
        printf(" Out of Memory !! Overflow !!!");
        return (start);
    } else {
        temp->data = elem;
        temp->prev = NULL;
        temp->next = start;
        start->prev = temp;
        printf(" New Node has been inserted at Front Successfully !!");
        return (temp);
    }
}

DNODE *InsBefore(DNODE *start, int elem, int info) {
    DNODE *temp, *t;
    temp = (DNODE *) malloc(sizeof(DNODE));
    if (temp == NULL) {
        printf(" Out of Memory !! Overflow !!!");
        return (start);
    } else {
        temp->data = elem;
        temp->next = NULL;
        temp->prev = NULL;

        if (start->data == info) { /* Front Insertion */
            temp->next = start;
            start->prev = temp;
            return (temp);
        } else {
            t = start;
            while (t != NULL && t->data != info)
                t = t->next;
            if (t->data == info) { /* Node found */
                temp->next = t;
                temp->prev = t->prev;
                t->prev->next = temp;
                t->prev = temp;
            } else
                printf(" Node not found,Invalid Info !!!");
            return (start);
        }
    }
}

DNODE *DelNode(DNODE *start, int info) {
    DNODE *t;
    if (start == NULL) {
        printf(" Underflow!!!");
        return (start);
    } else {
        t = start;
        if (start->data == info) { /* Front Deletion */
            start = start->next;
            start->prev = NULL;
            t->next = NULL;
            free(t);
            return (start);
        } else {
            while (t != NULL && t->data != info)
                t = t->next;
            if (t->data == info) { /* node to be deleted  found*/
                t->prev->next = t->next;
                t->next->prev = t->prev;
                t->next = t->prev = NULL;
                free(t);
            } else
                printf("\n ode not found, Invalid Info !!");
            return (start);
        }
    }
}

void Display(DNODE *start) {
    DNODE *t;
    if (start == NULL)
        printf("Empty Listn");
    else {
        t = start;
        printf("Forward Traversal nn Start->");
        while (t) {
            printf("[%d]->", t->data);
            t = t->next;
        }
        printf("\n ulln");
    }
}

