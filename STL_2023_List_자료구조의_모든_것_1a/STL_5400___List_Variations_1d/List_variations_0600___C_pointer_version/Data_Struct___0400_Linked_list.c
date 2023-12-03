#include <stdio.h>
#include <stdlib.h>

void main() {
    struct node {
        int num;
        struct node *ptr;
    };

    typedef struct node NODE;

    NODE *head, *first, *temp=0;
    int count = 0;
    int choice = 1;
    first = 0;

    while(choice) {
        head =(NODE*) malloc(sizeof(NODE));
        printf("Enter the data item: ");
        scanf("%d", &head-> num);

        if(first != 0) {
            temp->ptr = head;
            temp = head;
        } else {
            first = temp = head;
        }
        fflush(stdin);
        printf(" Continue(1) or Quit and Print(0): ");
        scanf("%d", &choice);

    }         /* End of while */

    temp->ptr = 0;
    temp = first;  /* reset temp to the beginning*/
    printf("\n Linked list ==> \n");

    while(temp!=0) {
        printf(" %d ==>", temp->num);
        count++;
        temp = temp -> ptr;
    }
    printf("NULL\n");
    printf("No. of nodes in the list = %d \n", count);

}  /* End of main*/
