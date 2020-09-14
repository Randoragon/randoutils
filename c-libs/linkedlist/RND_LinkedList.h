#ifndef RND_LINKEDLIST_H
#define RND_LINKEDLIST_H

#include <stdlib.h>

typedef struct RND_LinkedList RND_LinkedList;
struct RND_LinkedList
{
    void *data;
    RND_LinkedList *next;
};

RND_LinkedList *RND_linkedListCreate();
int RND_linkedListAdd(RND_LinkedList **list, void *data);
int RND_linkedListInsert(RND_LinkedList **list, size_t index, void *data);
void *RND_linkedListGet(RND_LinkedList **list, size_t index);
int RND_linkedListRemove(RND_LinkedList **list, size_t index, int (*dtor)(void *));
int RND_linkedListDestroy(RND_LinkedList **list, int (*dtor)(void *));
size_t RND_linkedListSize(RND_LinkedList **list);

int RND_linkedListDtorFree(void *data);

#endif
