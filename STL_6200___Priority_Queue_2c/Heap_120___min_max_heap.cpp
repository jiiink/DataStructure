#define MAX_SIZE 100
#define FALSE 0
#define TRUE 1
#define SWAP(x,y,t) ( (t)=(x),(x)=(y),(y)=(t) )

typedef struct {
    int key;
} element;

element heap[MAX_SIZE];

int level (int n) {       // n번째 node가 어떤 level에 있는지 출력
    int count =0;      // max level 이면 TRUE  // min level 이면 FALSE
    while(n) {
        n/=2;
        count++;
    }
    return ( count%2 ) ?  FALSE : TRUE ;
}


void verify_max ( element heap[], int i, element item ) {  // 새로 넣으준 node가 들어갈 자리를 찾는 함수이다.
    int grandparent = i / 4;                                               // i : 새로 넣은 node의 부모 위치
    while (grandparent ) {                                                 // grandparent : 부모의 부모...
        if ( item.key > heap[grandparent].key ) {
            heap[i] = heap[grandparent];
            i  = grandparent;
            grandparent /= 4;
        } else
            break;
        heap[i] = item;
    }

// verify_min 도 똑같다. verify_max if문의 조건만 바꾸면 된다.

void min_max_insert (element heap[], int n, element item) {
    int parent;
    n++;
    if ( n == MAX_SIZE ) {
        printf("heap is full\n");
        return;
    }
    parent = n/2;
    if ( !parent ) heap[1] = item;       // parent == 0 이면 ( n이 1이면 )
    else
        switch ( level ( parent ) ) {
        case FALSE :                          //  min level 일때,
            if ( item.key < heap[parent].key ) {
                heap[n] = heap[parent];
                verify_min (heap, parent, item);
            } else
                verify_max(heap, n, item);
            break;
        case TRUE :                            // max level 일때,
            if (item.key > heap[parent].key ) {
                heap[n] = heap[parent];
                verify_max(heap, parent, item);
            } else
                verify_min (heap, n, item );
        }
}
