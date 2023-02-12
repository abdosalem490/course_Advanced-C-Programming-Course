#include <stdio.h>
#include <stdlib.h>

// self referential structure
typedef struct node {
    char data;
    struct node * nextPtr;
} node_t;

typedef node_t *ListNodePtr;

// prototypes
void insert(ListNodePtr *head, char value);
void insertAtEnd(ListNodePtr *head, char value);
void insertAtBeginning(ListNodePtr *head, char value);
char delete(ListNodePtr *head, char value);
void deleteAtBeginning(ListNodePtr *head);
int isEmpty(ListNodePtr head);
void printList(ListNodePtr currentPtr);

int main(){

    ListNodePtr head = NULL;    // initially there are no nodes
    int choice = 0;             // user choice
    char item = '\0';           // char entered by user  

    // display the menu
    printf("Enter your choice:\n"
    "   1 to insert an element into the list in alphabetical order\n"
    "   2 to insert an element at the end of the list.\n"
    "   3 to insert an element at the begginning of the list.\n"
    "   4 to delete an element from the list.\n"
    "   5 to delete an element from the beginning of the list.\n"
    "   6 to end.\n");

    printf(":: ");
    scanf("%d", &choice);

    while (choice != 6)
    {
        switch (choice)
        {
        case 1:
            printf("Enter a character: ");
            scanf("\n%c", &item);
            insert(&head, item);    // insert item in list
            printList(head);
            break;
        
        case 2:
            printf("Enter a character: ");
            scanf("\n%c", &item);
            insertAtEnd(&head, item);
            printList(head);
            break;
        
        case 3:
            printf("Enter a character: ");
            scanf("\n%c", &item);
            insertAtBeginning(&head, item);
            printList(head);
            break;

        case 4:   // delete an element
            // if list is not empty
            if(!isEmpty(head)){
                printf("Enter character to be deleted: ");
                scanf("\n%c", &item);

                // if character is found, remove it
                if(delete(&head, item)){    // remove item
                    printf("%c deleted.\n", item);
                    printList(head);
                } // end if
                else
                {
                    printf("%c not found.\n\n", item);
                } // end else
            }  // end if
            else{
                printf("List is empty.\n\n");
            } // end else
            break;

            case 5:   // delete an element at the beginning
                // if list isnot empty
                if(!isEmpty(head)){
                    // if character is found, remove it
                    deleteAtBeginning(&head);
                    printf("%c deleted.\n", item);
                    printList(head);
                }   // end if 
                else
                {
                    printf("List is empty.\n\n");
                }   // end else
                break;


        default:
            printf("Invalid choice.\n\n");
            // display the menu
            printf("Enter your choice:\n"
            "   1 to insert an element into the list in alphabetical order\n"
            "   2 to insert an element at the end of the list.\n"
            "   3 to insert an element at the begginning of the list.\n"
            "   4 to delete an element from the list.\n"
            "   5 to delete an element from the beginning of the list.\n"
            "   6 to end.\n");

            break;
        }   // end switch

        printf("? ");
        scanf("%d", &choice);
    }

    printf("End of run.\n");
    

    return 0;   // indicates successful termination
}


// insert a new value into the list in sorted order
void insert(ListNodePtr *head, char value)
{
    ListNodePtr newPtr; // pointer to new node
    ListNodePtr previousPtr;    // Pointer to previous node in list
    ListNodePtr currentPtr;     // pointer to current node in list

    newPtr = malloc(sizeof(node_t));        // create node
    if(newPtr != NULL){ // is space available
        newPtr->data = value;   // place value in node
        newPtr->nextPtr = NULL; // node doesn't link to another ndoe

        previousPtr = NULL;
        currentPtr = *head;

        // loop to find the correct location ion the list
        while (currentPtr != NULL && value > currentPtr->data)
        {
            previousPtr = currentPtr;       // walk to ...
            currentPtr = currentPtr->nextPtr;   // ... next node
        }   // end while

        // insert new node begging of list
        if(previousPtr == NULL){
            newPtr->nextPtr = *head;
            *head = newPtr;
        }   // end if 
        else{   // insert new node between previousPtr and currentPtr
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }   // end else       
    }     // end if
    else{
        printf("%c not inserted. No memory available.\n", value);
    }   // end else
}   // end function insert

void insertAtEnd(ListNodePtr *head, char value)
{
    ListNodePtr current = *head;

    if(current != NULL){
        while (current->nextPtr != NULL)
            current = current->nextPtr;
        
        // now we add a new variable
        current->nextPtr = malloc(sizeof(node_t));
        current->nextPtr->data = value;
        current->nextPtr->nextPtr = NULL;
        
    }
    else
    {
        current = malloc(sizeof(node_t));
        current->data = value;
        current->nextPtr = NULL;
        *head = current;
    }
}

void insertAtBeginning(ListNodePtr *head, char value)
{
    ListNodePtr new_node = malloc(sizeof(node_t));
    new_node->data = value;
    new_node->nextPtr = *head;
    *head = new_node;
}

char delete(ListNodePtr *head, char value)
{
    ListNodePtr tempPtr;        // temporary node pointer
    ListNodePtr previousPtr;    // Pointer to previous node in list
    ListNodePtr currentPtr;     // pointer to current node in list

    // delete first node
    if(value == (*head)->data){ 
        tempPtr = *head;    // hold onto node being removed
        *head = (*head)->nextPtr;   // de-thread the node
        free(tempPtr);      // free the de-threaded node
        return value;
    }   // end if
    else
    {
        previousPtr = *head;
        currentPtr = (*head) -> nextPtr;

        // loop to find the correct location in the list
        while (currentPtr != NULL && currentPtr->data != value)
        {
            previousPtr = currentPtr;       // walk to ...
            currentPtr = currentPtr->nextPtr;   // ... next node
        }   // end while
        
        // delete node at currentPtr
        if(currentPtr != NULL){
            tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free(tempPtr);
            return value;
        }   // end if
        
    }   //e dn else

    return '\0';
}   // end of the function delete

void deleteAtBeginning(ListNodePtr *head)
{
    ListNodePtr tempPtr = NULL;     // temporary node pointer

    if(head == NULL){
        return;
    }else
    {
        tempPtr = *head;    // hold onto node being removed
        *head = (*head)->nextPtr;   // de-thread the node
        free(tempPtr);
    }
}

// return 1 if the list is empty, 0 otherwise
int isEmpty(ListNodePtr head)
{
    return head == NULL;
}

void printList(ListNodePtr currentPtr)
{   
    // if the list is empty
    if(currentPtr == NULL){
        printf("The list is empty.\n\n");
    }   // end if
    else
    {
        printf("The list is:\n");

        // while not the end of the list
        while(currentPtr != NULL){
            printf("%c --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }   // end while
        printf("NULL\n\n");
    }
}