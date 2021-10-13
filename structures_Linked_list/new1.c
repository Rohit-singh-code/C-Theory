// struct pqueue
// {
//     int data;
//     int pty;
// } struct pqueue pq[10];

// void pqinsert(int x, int pty, struct pqueue *pq, int *count)
// {
//     // x is item to be inserted
//     // pty is the priority of the item
//     // pq is the pointer to the priority queue
//     // count is the number of items in the queue

//     int j;
//     struct pqueue key;
//     key.data = x;
//     key.pty = pty;

//     j = *count - 1; // index of the initial position of the element

//     //compare the priority of the item being inserted with the
//     //priority of the items in the queue
//     // shift the items down while the priority of the item being
//     //inserted is greater than priority of the item in the queue

//     while ((j >= 0) && (pq[j].pty > key.pty))
//     {
//         pq[j + 1] = pq[j];
//         j--;
//     }
//     pq[j + 1] = key; // insert the element at its correct location
//     (*count)++;
// }

// struct pqueue pqdelete(struct pqueue *pq, int *count)
// {
//     // pq is a pointer to the priority queue
//     // count is the number of elements in the queue

//     int i;
//     struct pqueue key;
//     // if queue is empty, return a structure with priority -1

//     if (*count == 0)
//     {
//         key.data = 0;
//         key.pty = -1;
//     }

//     //delete the first item
//     //shift the other items to the left
//     else
//     {
//         key = pq[0];
//         for (i = 1; i <= *count - 1; i++)
//             pq[i - 1] = pq[i];
//         (*count)--;
//     }
//     return key; //return the key with the lowest priority
// }

// struct pqueue
// {
//     int data;
//     int pty;
// } struct pqueue pq[10];

// void pqinsert(int x, int pty, struct pqueue *pq, int *count)
// {
//     // x is item to be inserted
//     // pty is the priority of the item
//     // pq is the pointer to the priority queue
//     // count is the number of items in the queue

//     int j;
//     struct pqueue key;
//     key.data = x;
//     key.pty = pty;

//     j = *count - 1; // index of the initial position of the element

//     //compare the priority of the item being inserted with the
//     //priority of the items in the queue
//     // shift the items down while the priority of the item being
//     //inserted is greater than priority of the item in the queue

//     while ((j >= 0) && (pq[j].pty > key.pty))
//     {
//         pq[j + 1] = pq[j];
//         j--;
//     }
//     pq[j + 1] = key; // insert the element at its correct location
//     (*count)++;
// }

// struct pqueue pqdelete(struct pqueue *pq, int *count)
// {
//     // pq is a pointer to the priority queue
//     // count is the number of elements in the queue

//     int i;
//     struct pqueue key;
//     // if queue is empty, return a structure with priority -1

//     if (*count == 0)
//     {
//         key.data = 0;
//         key.pty = -1;
//     }

//     //delete the first item
//     //shift the other items to the left
//     else
//     {
//         key = pq[0];
//         for (i = 1; i <= *count - 1; i++)
//             pq[i - 1] = pq[i];
//         (*count)--;
//     }
//     return key; //return the key with the lowest priority
// }