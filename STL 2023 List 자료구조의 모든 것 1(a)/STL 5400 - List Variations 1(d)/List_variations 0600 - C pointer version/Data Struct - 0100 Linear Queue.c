#include <stdio.h>
#include <conio.h>
#define SIZE 5            /* Size of Queue */

int Q[SIZE],f=0,r=-1;       /* Global declarations */
int Qfull( ) ;
int Qempty( ) ;

int Qinsert(int elem) {
    if( Qfull())
        printf("\n Overflow!!!! ");
    else {
        ++r;
        Q[r]=elem;
    }
}

int Qdelete() { /* Function for Delete operation */
    int elem;
    if(Qempty()) {
        printf("\n Underflow!!!! ");
        return(-1);
    } else {
        elem=Q[f];
        f=f+1;
        return(elem);
    }
}

int Qfull() { /* Function to Check Queue Full */
    if(r==SIZE-1)
        return 1;
    return 0;
}

int Qempty() { /* Function to Check Queue Empty */
    if(f > r)
        return 1;
    return 0;
}

void display() { /* Function to display status of Queue */
    int i;
    if(Qempty())
        printf(" n Empty Queuen");
    else {
        printf("Front->");
        for(i=f; i<=r; i++)
            printf("%d ",Q[i]);
        printf("<-Rear");
    }
}

int main() {

    int opn,elem;
    do {
        printf("\n ### Queue Operations ### nn");
        printf("\n Press 1-Insert, 2-Delete,3-Display,4-Exitn");
        printf("\n Your option ? ");
        scanf("%d",&opn);
        switch(opn) {
        case 1:
            printf("\n Read the element to be Inserted ?");
            scanf("%d",&elem);
            Qinsert(elem);
            break;
        case 2:
            elem=Qdelete();
            if( elem != -1)
                printf("\n Deleted Element is %d n",elem);
            break;
        case 3:
            printf("\n Status of Queuenn");
            display();
            break;
        case 4:
            printf("\n Terminating nn");
            break;
        default:
            printf("\n Invalid Option !!! Try Again !! nn");
            break;
        }
        printf("\n Press a Key to Continue... ");
        getch();
    } while(opn != 4);

} // end of main()



