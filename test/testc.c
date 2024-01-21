#include <stdio.h> 
#include <stdlib.h>
int size(struct moz *phead);

struct moz{
    int x;
    struct moz *pnext;
};



int main() 
{ 
    struct moz *phead, *ptemp, *next;
    int siz;

    phead = (struct moz*) malloc(sizeof(phead));
    ptemp = (struct moz*) malloc(sizeof(phead));
    phead->pnext = ptemp;
    for(int i = 0; i < 3; i++){
        ptemp->pnext = (struct moz*) malloc(sizeof(phead));
        ptemp = ptemp->pnext;
    }
    ptemp->pnext = NULL;
    char a;
    scanf("%c",& a);
    if(a == 'a'){
        siz = size(phead);
        printf("%d", siz);
    }
    ptemp = phead;
    for(int i= 0; i < 2; i++){
        ptemp = ptemp->pnext;
    }
    next = ptemp->pnext;

    ptemp->pnext = next->pnext;
    free(next);

}

int size(struct moz *phead){
    struct moz *ptemp;
    int j =  0, i = 0;
    for(ptemp = phead; ptemp->pnext != NULL ; ptemp = ptemp->pnext){
        i++;
    }
    return i;
}



