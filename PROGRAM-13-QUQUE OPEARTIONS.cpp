#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Queue capacity
#define CAPACITY 100

/**
 * Global queue declaration.
 */
int queue[CAPACITY];
unsigned int size  = 0;
unsigned int rear  = CAPACITY - 1;   // Initally assumed that rear is at end
unsigned int front = 0;



/* Function declaration for various operations on queue */
int enqueue(int data);
int dequeue();
int isFull();
int isEmpty();
int getRear();
int getFront();



/* Driver function */
int main()
{
    int ch, data;


    /* Run indefinitely until user manually terminates */
    while (1)
    {
        /* Queue menu */
        printf("--------------------------------------\n");
        printf("  QUEUE ARRAY IMPLEMENTATION PROGRAM  \n");
        printf("--------------------------------------\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Size\n");
        printf("4. Get Rear\n");
        printf("5. Get Front\n");
        printf("0. Exit\n");
        printf("--------------------------------------\n");
        printf("Select an option: ");

        scanf("%d", &ch);

        
        /* Menu control switch */
        switch (ch)
        {
            case 1:
                printf("\nEnter data to enqueue: ");
                scanf("%d", &data);

                // Enqueue function returns 1 on success
                // otherwise 0
                if (enqueue(data))
                    printf("Element added to queue.");
                else
                    printf("Queue is full.");

                break;

            case 2:
                data = dequeue();

                // on success dequeue returns element removed
                // otherwise returns INT_MIN
                if (data == INT_MIN)
                    printf("Queue is empty.");
                else
                    printf("Data => %d", data);

                break;

            case 3: 

                // isEmpty() function returns 1 if queue is emtpy 
                // otherwise returns 0
                if (isEmpty())
                    printf("Queue is empty.");
                else 
                    printf("Queue size => %d", size);

                break;

            case 4: 

                if (isEmpty())
                    printf("Queue is empty.")#include <stdlib.h>
#include <stdio.h>

struct node {
   int data; 
	
   struct node *leftChild;
   struct node *rightChild;
};

struct node *root = NULL;

void insert(int data) {
   struct node *tempNode = (struct node*) malloc(sizeof(struct node));
   struct node *current;
   struct node *parent;

   tempNode->data = data;
   tempNode->leftChild = NULL;
   tempNode->rightChild = NULL;

   //if tree is empty
   if(root == NULL) {
      root = tempNode;
   } else {
      current = root;
      parent = NULL;

      while(1) { 
         parent = current;
         
         //go to left of the tree
         if(data < parent->data) {
            current = current->leftChild;                
            
            //insert to the left
            if(current == NULL) {
               parent->leftChild = tempNode;
               return;
            }
         }  //go to right of the tree
         else {
            current = current->rightChild;

            //insert to the right
            if(current == NULL) {
               parent->rightChild = tempNode;
               return;
            }
         }
      }            
   }
}

struct node* search(int data) {
   struct node *current = root;
   printf("Visiting elements: ");

   while(current->data != data) {
      if(current != NULL)
         printf("%d ",current->data); 

      //go to left tree
      if(current->data > data) {
         current = current->leftChild;
      }
;
  

