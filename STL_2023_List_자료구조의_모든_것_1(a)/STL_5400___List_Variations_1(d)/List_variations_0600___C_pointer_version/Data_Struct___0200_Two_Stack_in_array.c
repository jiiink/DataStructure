#include <stdio.h>
#include <conio.h>
#define SIZE 10            /* Size of Stack */

int s[SIZE],top[3]= {0,-1,SIZE};
int Sfull() ;
int Sempty() ;

void push(int elem,int stno) {
    int pos;      /* Function for PUSH operation */
    if( Sfull())
        printf("\n Overflow!!!!nn");
    else {
        if(stno==1)
            pos= ++top[stno];
        else
            pos=--top[stno];
        s[pos]=elem;
    }
}


int pop(int stno) { /* Function for POP operation */
    int elem,pos;
    if(Sempty(stno)) {
        printf("\n Underflow!!!! ");
        return(-1);
    } else {
        pos=top[stno];
        elem=s[pos];
        if(stno == 1)
            top[stno]--;
        else
            top[stno]++;
        return(elem);
    }
}

int Sfull() {  /* Function to Check Stack Full */
    if(top[1] == top[2]-1)
        return 1;
    return 0;
}

int Sempty(int stno) { /* Function to Check Stack Empty */
    switch(stno) {
    case 1:
        if(top[1] == -1)
            return 1;
        else
            return 0;
    case 2:
        if(top[2] == SIZE)
            return 1;
        else
            return 0;
    }
}

void display(int stno) {     /* Function to display status of Stack */
    int i;
    if(Sempty(stno))
        printf("\n Empty Stack \n");
    else {
        if(stno == 1) {
            for(i=0; i<=top[stno]; i++)
                printf("%d \n",s[i]);
            printf("^Top");
        } else {
            for(i=SIZE-1; i>=top[stno]; i--)
                printf("%d \n",s[i]);
            printf("^Top");
        }
    }
}

int main() {    /* Main Program */
    int opn,elem,stno;
    do {

        printf("\n ### Stack Operations ###  \n");
        printf("\n Stack Number (1,2): ");
        scanf("%d",&stno);
        printf("\n Press 1-Push, 2-Pop,3-Display,4-Exit \n");
        printf("\n Your option ? ");
        scanf("%d",&opn);

        switch(opn) {
        case 1:
            printf("\n Read the element to be pushed ?");
            scanf("%d",&elem);
            push(elem,stno);
            break;
        case 2:
            elem=pop(stno);
            if( elem != -1)
                printf("\n Popped Element is %d \n",elem);
            break;
        case 3:
            printf("\n Status of Stack %d \n",stno);
            display(stno);
            break;
        case 4:
            printf("\n Terminating nn");
            break;
        default:
            printf("\nInvalid Option !!! Try Again !!\n");
            break;
        }
        printf("\n  Press a Key to Continue . . . ");
        getch();
    } while(opn != 4);
}



