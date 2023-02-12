#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// self-referential structure
struct treeNode{
    int data;           // node value
    struct treeNode *leftPtr;       // pointer to left subtree
    struct treeNode *rightPtr;      // pointer to right subtree
};

typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;

// prototypes
void insertNode(TreeNodePtr *treePtr, int value);
void inOrder(TreeNodePtr treePtr);
void preOrder(TreeNodePtr treePtr);
void postOrder(TreeNodePtr treePtr);


int main(){

    int i = 0;  // counter to loop from 0 - 10
    int item = 0;   // variable to hold random values
    TreeNodePtr rootPtr = NULL; // tree initially empty

    srand(time(NULL));
    printf("The number neing placed in the tree are:\n");

    // insert random value between 0 and 14 in the tree
    for(i = 1; i <= 10; i++){
        item = rand() % 15;
        printf("%3d", item);
        insertNode(&rootPtr, item);
    }

    // traverse the tree preOrder
    printf("\n The preOrder traversal is:\n");
    preOrder(rootPtr);

    // traverse the tree inOrder
    printf("\n The inOrder traversal is:\n");
    inOrder(rootPtr);

    // traverse the tree postOrder
    printf("\n The postOrder traversal is:\n");
    postOrder(rootPtr);

    return 0;   // indicates successful return 
}


void insertNode(TreeNodePtr *treePtr, int value)
{
    if(*treePtr == NULL){
        *treePtr = malloc(sizeof(TreeNode));

        // if memory was allocated then assign data
        if(*treePtr != NULL){
            (*treePtr)->data = value;
            (*treePtr)->leftPtr = NULL;
            (*treePtr)->rightPtr = NULL;
        } // end if
        else{
            printf("%d not inserted. No emmory available.\n", value);
        }   // end else
    }   // end if
    else    // tree is not empty
    {
        // data to insert is less than data in current node
        if(value < (*treePtr)->data){
            insertNode(&((*treePtr)->leftPtr), value);
        }

        // data to insert is greater than data in current node
        else if(value > (*treePtr)->data){
            insertNode(&((*treePtr)->rightPtr), value);
        }

        else    // duplicate data value ignored
        {       
            printf("dup");
        }
    }
}

void inOrder(TreeNodePtr treePtr)
{
    if(treePtr != NULL){
        inOrder(treePtr->leftPtr);
        printf("%3d", treePtr->data);
        inOrder(treePtr->rightPtr);
    }
}

void preOrder(TreeNodePtr treePtr)
{
    if(treePtr != NULL){
        printf("%3d", treePtr->data);
        inOrder(treePtr->leftPtr);
        inOrder(treePtr->rightPtr);
    }
}

void postOrder(TreeNodePtr treePtr)
{
    if(treePtr != NULL){
        inOrder(treePtr->leftPtr);
        inOrder(treePtr->rightPtr);
        printf("%3d", treePtr->data);
    }
}