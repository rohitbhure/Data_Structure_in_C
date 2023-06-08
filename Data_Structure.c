#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int a[MAX];
int Myarray(void);
void insertion_Myarray(void);
void searching_Myarray(void);
void deletion_Myarray(void);
void display_Myarray(void);
int n;

int Mylinkedlist(void);
int singely_linkedlist(void);
void insertatbeg_Mylinkedlist(void);
void insertatposition_Mylinkedlist(void);
void insertatend_Mylinkedlist(void);
void deletionatbegin_Mylinkedlist(void);
void deletionatposition_Mylinkedlist(void);
void deletionatend_Mylinkedlist(void);
void reverse_Mylinkedlist(void);
void display_Mylinkedlist(); 
struct node
{
    int data;
    struct node *link, *prev;
    struct node *left;
    struct node *right;
};
struct node *head, *current, *root = NULL, *temp = NULL, *t2, *t1;
static int count;

int doubly_linkedlist(void);
void insertatbeg_doublylinklist(void);
void insertatend_doublylinklist(void);
void insertatpos_doublylinklist(void);
void deleteatbeg_doublylinklist(void);
void deleteatend_doublylinklist(void);
void deleteatpos_doublylinklist(void);
void reverse_doublylinklist();
void display_doublylinklist();

int circular_linkedlist(void);
void insertatbeg_circularlinklist(void);
void insertatend_circularlinklist(void);
void insertatpos_circularlinklist(void);
void deleteatbeg_circularlinklist(void);
void deleteatend_circularlinklist(void);
void deleteatpos_circularlinklist(void);
void reverse_circularlinklist();
void display_circularlinklist();

int Mystack(void);
int Mystack_array();
int Mystack_linkedlist();
void pop_array();
void push_array();
void push_linkedlist();
void pop_linkedlist();
void show_Mystacklinkedlist();
void show_Mystackarray();
int top = -1;

int Myqueue();
int Myqueue_array();
void enqueue_array();
void dequeue_array();
void show_Myqueuearray();
int Myqueue_linkedlist();
void enqueue_linkedlist();
void dequeue_linkedlist();
void show_Myqueuelinkedlist();

struct node *arear=NULL;
struct node *afront=NULL;
int front=-1;
int rear =-1;

int Mytree();
void delete_Mytree();
void insert_Mytree();
void inorder_Mytree(struct node *t);
void create_Mytree();
void search_Mytree(struct node *t);
void preorder_Mytree(struct node *t);
void postorder_Mytree(struct node *t);
void search1_Mytree(struct node *t,int data);
void delete1_Mytree(struct node *t);
int smallest_Mytree(struct node *t);
int largest_Mytree(struct node *t);
 
int flag = 1;

int main()
{
    int choice;
    while(1)
    {
        printf("\n |-------------------------------------------------------------|");
        printf("\n * placement oriented project based training on Data Structure *");
        printf("\n |-------------------------------------------------------------|");
        printf("\n press any key to continue ");
        getchar();
        printf("\n |-------------------------|");
        printf("\n * various Data Structures *");
        printf("\n |-------------------------|");
        printf("\n 1.Array         ");
        printf("\n 2.linkedlist    ");
        printf("\n 3.stack");
        printf("\n 4.queue");
        printf("\n 5.tree");
        printf("\n 6.exit");
        printf("\n\nenter your choice ");
        scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        Myarray();
        case 2:
        Mylinkedlist();
        case 3:
        Mystack();
        break;
        case 4:
        Myqueue();
        break;
        case 5:
        Mytree();
        break;
        case 6:
        exit(0);
        default:
        printf("\n-------------------------------------------------------------");
        printf("\n|                      invalid choice                       |");
        printf("\n---------------------------------------------------------\n\n");
        break;
     }
     }
     return 0;
}

int Myarray(){
    char choice;
    while(1)
    {
        printf("\n|-----------------------------------------------------------|");
        printf("\n*                    array implementation                   *");
        printf("\n|-----------------------------------------------------------|");
        
        printf("\n---------------Various implementation at array---------------");
        printf("\n1.inserting an element in the array");
        printf("\n2.deletion an elememt in the array ");
        printf("\n3.searching an elememt in the array");
        printf("\n4.display an elememt in the array  ");
        printf("\n5.Exit                             ");
        printf("\n                                   ");
        
        printf("\nenter your choice: ");
        scanf("%hhd",&choice);
    
    switch(choice)
    {
        case 1:
        insertion_Myarray();
        break;
        case 2:
        deletion_Myarray();
        break;
        case 3:
        searching_Myarray();
        break;
        case 4:
        display_Myarray();
        break;
        case 5:
        exit(1);
        break;
        default:
        printf("invalid choice");
    }  
    }
    return 0;
}

void insertion_Myarray()
{
    int i,pos,val;
    printf("\n enter the number of element: ");
    scanf("%d",&n);
    printf("enter the array element: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nthe array element are: ");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\nenter the position to insert: ");
    scanf("%d",&pos);
    printf("\n enter the value to be inserted: ");
    scanf("%d",&val);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=val;
    n++;
    printf("\narray elements after the insertion of the array elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
void display_Myarray()
{ 
    int i;
    printf("\n the element of the array are: ");
    for( i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}
void deletion_Myarray()
{
    int i,pos;
    printf("\nenter the position you want to delete");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i--)
    {
        a[i]=a[i+1];
    }
    pos=a[i+1];
    n--;
    printf("\narray elements after the deletion of the element from the array ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
void searching_Myarray()
{
    int i,val;
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==val)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("the element is presented at position: %d", i+1 );
    }
}
int Mylinkedlist()
{
    char choice;
    while(1)
    {   
        printf("\n |-----------------------------------------------------------|");
        printf("\n *                   Types of linkedlist                     *");
        printf("\n |-----------------------------------------------------------|");
    
        printf("\n 1.singely linkedlist ");
        printf("\n 2.doubly linkedlist  ");
        printf("\n 3.circular linkedlist");
        printf("\n 4.exit");
        
        printf("\n enter your choice: ");
        scanf("%hhd",&choice);
        
        switch(choice)
        {
            case 1:
            singely_linkedlist();
            break;
            case 2:
            doubly_linkedlist();
            break;
            case 3:
            circular_linkedlist();
            break;
            case 4:
            exit(1);
            break;
            default:
            printf("\ninvalid choice");
        }
    }
    return 0;
}
int singely_linkedlist()
{   
    char choice;
    int data, position;
    while(1)
    {
        printf("\n|-----------------------------------------------------------|");
        printf("\n*            singly linkedlist implementation               *");
        printf("\n|-----------------------------------------------------------|");
        
        printf("\n******** Various implementation at singly linkedlist ********");
        printf("\n|1.inserting an element at the beginning in the linkedlist  ");
        printf("\n|2.inserting an element at the position in the linkedlist    ");
        printf("\n*3.inserting an element at the end of the linkedlist         ");
        printf("\n|4.deletion an elememt from beggining of the linkedlist      ");
        printf("\n|5.deletion an elememt from  specific position of the linkedlist");
        printf("\n*6.deletion an elememt from end of the linkedlist");
        printf("\n|7.reverse the elememt of linkedlist");
        printf("\n|8.display the elements");
        printf("\n*9.Exit ");  
        
        printf("\nenter your choice: ");
        scanf("%hhd",&choice);
    switch(choice)
    {
        case 1:
        insertatbeg_Mylinkedlist();
        break;
        case 2:
        insertatposition_Mylinkedlist();
        break;
        case 3:
        insertatend_Mylinkedlist();
        break;
        case 4:
        deletionatbegin_Mylinkedlist();
        break;
        case 5:
        deletionatposition_Mylinkedlist();
        break;
        case 6:
        deletionatend_Mylinkedlist();
        break;
        case 7:
        reverse_Mylinkedlist();
        break;
        case 8:
        display_Mylinkedlist();
        break;
        case 9:
        exit(1);
        break;
        default:
        printf("invalid choice");  
    }
    }
    return 0;
}
void insertatbeg_Mylinkedlist()
{   
    int item;
    struct node* temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d", &item);
    temp->data = item;
    temp->link = head;
    head = temp;
}
void insertatposition_Mylinkedlist( )
{  
    struct node *temp, *ptr;
    int pos, item, i = 1;
    ptr = malloc(sizeof(struct node));
 
    printf("\nEnter position and data : ");
    scanf("%d \n%d", &pos, &item);
 
    temp = head;
    ptr->data = item;
    ptr->link = NULL;
    while (i < pos - 1) 
    {
        temp = temp->link;
        i++;
    }
    ptr->link = temp->link;
    temp->link = ptr;
}
void insertatend_Mylinkedlist()
{
    int item;
    struct node *temp, *ptr;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d", &item);
    
    temp->link = NULL;
    temp->data = item;
    ptr = head;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}
void deletionatbegin_Mylinkedlist()
{
    struct node* temp;
    if (head == NULL)
        printf("\nList is empty");
    else
    {
        temp = head;
        head = head->link;
        free(temp);
    }
}
void deletionatposition_Mylinkedlist()
{
    struct node *temp, *position;
    int i = 1, pos;
 
    if (head == NULL)
        printf("\nList is empty\n");
 
    else 
    {
        printf("\nEnter index : ");
        scanf("%d", &pos);
        position = malloc(sizeof(struct node));
        temp = head;
        while (i < pos - 1) 
        {
            temp = temp->link;
            i++;
        }
    }
}
void deletionatend_Mylinkedlist()
{
    struct node *temp, *prevnode;
    if (head == NULL)
    {
    printf("\nList is Empty\n");
    }
    else 
    {
        temp = head;
        while (temp->link != NULL)
        {
            prevnode = temp;
            temp = temp->link;
        }
        free(temp);
        prevnode->link = NULL;
    }
}
void reverse_Mylinkedlist()
{
    struct node *temp1, *temp2, *temp;
    temp1 = temp2 = NULL;
 
    if (head == NULL)
    {
        printf("\nList is empty");
    }  
    else
    {
        while (head != NULL)
        {
            temp2 = head->link;
            head->link = temp1;
            temp1 = head;
            head = temp2;
        }
        head = temp1;
        temp = head;
 
        printf("Reversed linked list is : ");
        while (temp != NULL) 
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
    }
}
void display_Mylinkedlist()
{
    struct node* temp;
    if (head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("Data = %d\n", temp->data);
            temp = temp->link;
        }
    }
}
int doubly_linkedlist()
{
    char choice;
    int data, position;
    while(1)
    {
        printf("\n*-----------------------------------------------------------*");
        printf("\n|              doubly linkedlist implementation             |");
        printf("\n*-----------------------------------------------------------*");
        
        printf("\n******** Various implementation at doubly linkedlist ********         ");
        printf("\n|1.inserting an element at the beginning in the doubly linkedlist      ");
        printf("\n|2.inserting an element at the position in the doubly linkedlist       ");
        printf("\n*3.inserting an element at the end of the doubly linkedlist            ");
        printf("\n|4.deletion an elememt from beggining of the doubly linkedlist         ");
        printf("\n|5.deletion an elememt from  specific position of the doubly linkedlist");
        printf("\n*6.deletion an elememt from end of the doubly linkedlist               ");
        printf("\n|7.reverse the elememt of doubly linkedlist                            ");
        printf("\n|8.display the elements");
        printf("\n*9.Exit ");  
        
        printf("\nenter your choice: ");
        scanf("%hhd",&choice);
    switch(choice)
    {
        case 1:
        insertatbeg_doublylinklist();
        break;
        case 2:
        insertatpos_doublylinklist();
        break;
        case 3:
        insertatend_doublylinklist();
        break;
        case 4:
        deleteatbeg_doublylinklist();
        break;
        case 5:
        deleteatpos_doublylinklist();
        break;
        case 6:
        deleteatend_doublylinklist();
        break;
        case 7:
        reverse_doublylinklist();
        break;
        case 8:
        display_doublylinklist();
        break;
        case 9:
        exit(1);
        break;
        default:
        printf("\ninvalid choice");  
    }
    }
    return 0;
}
void insertatbeg_doublylinklist()
{
    int item;
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter number to be inserted: ");
    scanf("%d", &item);
    temp->data = item;
    temp->prev = NULL;
 
    temp->link = head;
    head = temp;
}
void insertatpos_doublylinklist()
{
    int item, pos, i = 1;
    struct node *temp, *ptr;
    ptr = malloc(sizeof(struct node));
    ptr->link = NULL;
    ptr->prev = NULL;
 
    printf("\nEnter position : ");
    scanf("%d", &pos);
     
    if (head == NULL) 
    {
        head = ptr;
        ptr->prev = NULL;
        ptr->link = NULL;
    }
    else if(pos==1)
    {
    insertatbeg_doublylinklist();
    }
    else
    {
        printf("\nEnter number to be inserted: ");
        scanf("%d", &item);
        ptr->data = item;
        temp = head;
        while (i < pos - 1) 
        {
            temp = temp->link;
            i++;
        }
        ptr->link = temp->link;
        ptr->prev = temp;
        temp->link = ptr;
        temp->link->prev = ptr;
    }
}
void insertatend_doublylinklist()
{
    int item;
    struct node *temp, *ptr;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->link = NULL;
    printf("\nEnter number to be inserted: ");
    scanf("%d", &item);
    temp->data = item;
    temp->link = NULL;
    ptr = head;

    if (head == NULL) 
    {
         head = temp;
    }
    else 
    {
        while (ptr != NULL)
        {
            ptr = ptr->link;
            temp->prev = ptr;
            ptr->link = temp;
        }
    }
}
void deleteatbeg_doublylinklist()
{
    struct node* temp;
    if (head == NULL)
        printf("\nList is empty");
    else
    {
        temp = head;
        head = head->link;
        free(temp);
    }
}
void deleteatpos_doublylinklist()
{
    int pos, i = 1;
    struct node *temp, *position;
    temp = head;
 
    if (head == NULL)
        printf("\nList is empty\n");
 
    else 
    {
        printf("\nEnter position : ");
        scanf("%d", &pos);
 
        if (pos == 1)
        {
            deleteatbeg_doublylinklist();
        }
        if (head != NULL)
        {
            head->prev = NULL;
        }
        free(position);
        return;
        while (i < pos - 1)
        {
            temp = temp->link;
            i++;
        }
    }
}
void deleteatend_doublylinklist()
{
    struct node* temp;
    if (head == NULL)
    {
        printf("\nList is empty");
    }
    temp = head;
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    if (head->link == NULL)
    {
        head = NULL;
    }
    else 
    {
        temp->prev->link = NULL;
        free(temp);
    }
}
void reverse_doublylinklist()
{
    struct node *current, *temp;
    current = head;
    while(current != NULL)
    {
        temp = current->prev;
        current->prev = current->link;
        current->link = temp;
        current =current->prev;
    }
}
void display_doublylinklist()
{
    if (head == NULL)
    {
        printf("\nList is empty");
    }
    struct node* temp;
    temp = head;
    while (temp != NULL) 
    {
        printf("Data = %d\n", temp->data);
        temp = temp->link;
    }
}
int circular_linkedlist()
{
   char choice;
    int data, position;
    while(1)
    {
        printf("\n|-----------------------------------------------------------|");
        printf("\n*              doubly linkedlist implementation             *");
        printf("\n|-----------------------------------------------------------|");
        
        printf("\n******** Various implementation at circular linkedlist ********         ");
        printf("\n|1.inserting an element at the beginning in the circular linkedlist      ");
        printf("\n|2.inserting an element at the position in the circular linkedlist       ");
        printf("\n*3.inserting an element at the end of the circular linkedlist            ");
        printf("\n|4.deletion an elememt from beggining of the circular linkedlist         ");
        printf("\n|5.deletion an elememt from  specific position of the circular linkedlist");
        printf("\n*6.deletion an elememt from end of the circular linkedlist               ");
        printf("\n|7.reverse the elememt of circular linkedlist                            ");
        printf("\n|8.display the elements");
        printf("\n*9.Exit ");  
        
        printf("\nenter your choice: ");
        scanf("%hhd",&choice);
    switch(choice)
    {
        case 1:
        insertatbeg_circularlinklist();
        break;
        case 2:
        insertatpos_circularlinklist();
        break;
        case 3:
        insertatend_circularlinklist();
        break;
        case 4:
        deleteatbeg_circularlinklist();
        break;
        case 5:
        deleteatpos_circularlinklist();
        break;
        case 6:
        deleteatend_circularlinklist();
        break;
        case 7:
        reverse_circularlinklist();
        break;
        case 8:
        display_circularlinklist();
        break;
        case 9:
        exit(1);
        break;
        default:
        printf("\ninvalid choice");
    }
    }
    return 0;
}
void insertatbeg_circularlinklist()
{
    int item;
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter number to be inserted: ");
    scanf("%d", &item);
    temp->data = item;
    temp->prev = NULL;
 
    temp->link = head;
    head = temp;
}
void insertatpos_circularlinklist()
{
    int item, pos, i = 1;
    struct node *temp, *ptr;
    ptr = malloc(sizeof(struct node));
    ptr->link = NULL;
    ptr->prev = NULL;
 
    printf("\nEnter position : ");
    scanf("%d", &pos);
     
    if (head == NULL) 
    {
        head = ptr;
        ptr->prev = NULL;
        ptr->link = NULL;
    }
    else if(pos==1)
    {
    insertatbeg_circularlinklist();
    }
    else
    {
        printf("\nEnter number to be inserted: ");
        scanf("%d", &item);
        ptr->data = item;
        temp = head;
        while (i < pos - 1) 
        {
            temp = temp->link;
            i++;
        }
        ptr->link = temp->link;
        ptr->prev = temp;
        temp->link = ptr;
        temp->link->prev = ptr;
    }
}
void insertatend_circularlinklist()
{
    int item;
    struct node *temp, *ptr;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->link = NULL;
    printf("\nEnter number to be inserted: ");
    scanf("%d", &item);
    temp->data = item;
    temp->link = NULL;
    ptr = head;

    if (head == NULL) 
    {
         head = temp;
    }
    else 
    {
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
            temp->prev = ptr;
            ptr->link = temp;
        }
    }
}
void deleteatbeg_circularlinklist()
{
    struct node* temp;
    if (head == NULL)
        printf("\nList is empty");
    else
    {
        temp = head;
        head = head->link;
        free(temp);
    }
}
void deleteatpos_circularlinklist()
{
    int pos, i = 1;
    struct node *temp, *position;
    temp = head;
 
    if (head == NULL)
        printf("\nList is empty\n");
 
    else 
    {
        printf("\nEnter position : ");
        scanf("%d", &pos);
 
        if (pos == 1)
        {
            deleteatbeg_doublylinklist();
        }
        if (head != NULL)
        {
            head->prev = NULL;
        }
        free(position);
        return;
        while (i < pos - 1)
        {
            temp = temp->link;
            i++;
        }
    }
}
void deleteatend_circularlinklist()
{
    struct node* temp;
    if (head == NULL)
    {
        printf("\nList is empty");
    }
    temp = head;
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    if (head->link == NULL)
    {
        head = NULL;
    }
    else 
    {
        temp->prev->link = NULL;
        free(temp);
    }
}
void reverse_circularlinklist()
{
    struct node *current, *temp;
    current = head;
    while(current != NULL)
    {
        temp = current->link;
        current->link = current->prev;
        current->prev = temp;
    }
    current = temp;
}
void display_circularlinklist()
{
    if (head == NULL)
    {
        printf("\nList is empty");
    }
    struct node* temp;
    temp = head;
    while (temp != NULL) 
    {
        printf("Data = %d\n", temp->data);
        temp = temp->link;
    }
}
int Mystack()
{
    char choice;
    while(1)
    {
        printf("\n|-----------------------------------------------------------|");
        printf("\n*                   stack implementation                    *");
        printf("\n|-----------------------------------------------------------|");
        
        printf("\n---------------Various implementation at stack---------------");
        printf("\n1.implement stack using array");
        printf("\n2.implement stack using linkedlist");
        printf("\n3.exit");
        
        printf("\nenter your choice: ");
        scanf("%hhd",&choice);
    
    switch(choice)
    {
        case 1:
        Mystack_array();
        break;
        case 2:
        Mystack_linkedlist();
        break;
        case 3:
        exit(1);
        break;
        default:
        printf("invalid choice");
    }  
    }
    return 0;
}
int Mystack_array()
{
    char choice;
    while(1)
    {
        printf("\n|-----------------------------------------------------------|");
        printf("\n*             stack implementation using array              *");
        printf("\n|-----------------------------------------------------------|");
        
        printf("\n-------- Various implementation at stack usingarray ---------");
        printf("\n1.to push an element");
        printf("\n2.to pop an element");
        printf("\n3.to show");
        printf("\n4.to exit ");

        printf("\nenter your choice: ");
        scanf("%hhd",&choice);
    
    switch(choice)
    {
        case 1:
        push_array();
        break;
        case 2:
        pop_array();
        break;
        case 3:
        show_Mystackarray();
        break;
        case 4:
        exit(1);
        break;
        default:
        printf("invalid choice");
    }  
    }
    return 0;
}
void push_array()
{   
    int x;
    if(top==MAX-1)
    {
        printf("\ncondition Overflow!");
    }
    printf("\nEnter element to be inserted to the stack:");
    scanf("%d",&x);
    top = top+1;
    a[top]=x;
}
void pop_array()
{   
    int x;
    if(top==-1)
    {
        printf("\ncondtion underflow!!");
    }
    printf("\nPopped element:  %d",a[top]);
    top = top-1;
}
void show_Mystackarray()
{
    if(top==-1)
    {
        printf("\n Condition underflow");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for(int i=top;i>=0;i--)
        {
        printf("%d\n",a[i]);
        }
    }
}
int Mystack_linkedlist()
{
    char choice;
    while(1)
    {
        printf("\n|-----------------------------------------------------------|");
        printf("\n*          stack implementation using linkedlist            *");
        printf("\n|-----------------------------------------------------------|");
        
        printf("\n-------- Various implementation at stack usinglinkedlist ---------");
        printf("\n1.to push an element");
        printf("\n2.to pop an element");
         printf("\n3.to show");
        printf("\n3.to exit");
        
        printf("\nenter your choice: ");
        scanf("%hhd",&choice);
    
    switch(choice)
    {
        case 1:
        push_linkedlist();
        break;
        case 2:
        pop_linkedlist();
        break;
        case 3:
        show_Mystacklinkedlist();
        break;
        case 4:
        exit(1);
        break;
        default:
        printf("invalid choice");
    }  
    }
    return 0;
}
void push_linkedlist()
{   
    int item;
    printf("enter the item you want: ");
    scanf("%d",&item);
    struct node *temp;
    temp = malloc(sizeof(struct node));
     if(head==NULL)  
        {         
            temp->data = item;  
            temp-> link = NULL;  
            head=temp;  
        }   
        else   
        {  
            temp->data =item;  
            temp->link = head;  
            head=temp;  
        } 
}
void pop_linkedlist()
{ 
    int item;
    struct node *temp;
    if(head==NULL)
    {
        printf("\n Condition underflow");
    }
    else  
    {  
        item = head->data;  
        temp = head;  
        head = head->link;  
        free(temp); 
        
    }  
}
void show_Mystacklinkedlist()
{
    int i;  
    struct node *ptr;  
    ptr=head;  
    if(ptr == NULL)  
    {  
        printf("\nStack is empty");  
    }  
    else  
    {  
        printf("\nThe Stack elements are: ");  
        while(ptr!=NULL)  
        {  
            printf("%d\n",ptr->data);  
            ptr = ptr->link;  
        }  
    }  
}
int Myqueue()
{
    char choice;
    while(1)
    {
        printf("\n1.queue using array");
        printf("\n2.queue using linkedlist");
        printf("\nenter the choice:");
        scanf("\n%hhd",&choice);
        switch(choice)
        {
            case 1:
            Myqueue_array();
            break;
            case 2:
            Myqueue_linkedlist();
            break;
            case 3:
            exit(0);
            break;
            default:
            printf("\ninvalid choice");
        }
    }
}

int Myqueue_array()
{
    char choice;
    while(1)
    {
        printf("\n|-----------------------------------------------------------|");
        printf("\n*             queue implementation using array              *");
        printf("\n|-----------------------------------------------------------|");
    
        printf("\n-------- Various implementation at queue usingarray ---------");
        printf("\n1.to enqueue an element");
        printf("\n2.to dequeue an element");
        printf("\n3.to show");
        printf("\n4.to exit ");

        printf("\nenter your choice: ");
        scanf("%hhd",&choice);
    
    switch(choice)
    {
        case 1:
        enqueue_array();
        break;
        case 2:
        dequeue_array();
        break;
        case 3:
        show_Myqueuearray();
        break;
        case 4:
        exit(0);
        break;
        default:
        printf("invalid choice");
    }  
    }
    return 0;
}
void enqueue_array()
{   
    int x;
    if(rear==MAX-1)
    {
        printf("\nCondition overflowed!");
    }
    else if (front==-1 && rear==-1)
    {
        printf("\nEnter element to be inserted to the queue:");
        scanf("%d",&x);
        front = rear = 0;
        a[rear]=x;
    }
     else
    {
        printf("\nEnter element to be inserted to the queue:");
        scanf("%d",&x);
        rear = rear+1;
        a[rear]=x;
    }
}
void dequeue_array()
{   
    int x;
    if(front==-1)
    {
        printf("\ncondtion underflow!!");
    }
    else 
    {
    printf("\ndequeued element:  %d",a[front]);
    front = front-1;
    }
}
void show_Myqueuearray()
{
    if(front==-1 && rear == -1)
    {
        printf("\nqueue is empty ");
    }
    else
    {
        printf("\nElements present in the queue are: \n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d\n",a[i]);
        }
    }
}
int Myqueue_linkedlist()
{
    char choice;
    while(1)
    {
        printf("\n|-----------------------------------------------------------|");
        printf("\n*           queue implementation using linkedlist           *");
        printf("\n|-----------------------------------------------------------|");
        
        printf("\n-------- Various implementation at queue usinglinkedlist ---------");
        printf("\n1.to enqueue an element");
        printf("\n2.to dequeue an element");
        printf("\n3.to show");
        printf("\n4.to exit ");

        printf("\nenter your choice: ");
        scanf("%hhd",&choice);
    
    switch(choice)
    {
        case 1:
        enqueue_linkedlist();
        break;
        case 2:
        dequeue_linkedlist();
        break;
        case 3:
        show_Myqueuelinkedlist();
        break;
        case 4:
        exit(0);
        break;
        default:
        printf("invalid choice");
    }  
    }
    return 0;
}
void enqueue_linkedlist()
{   
    int x;
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    
    if (temp==NULL)
    {
        printf("\ncondition overflow!");
        return;
    }
    else
    {
        printf("\nenter the value you want to inser: ");
        scanf("%d",&x);
        temp->data=x;
        temp->link=NULL;
        if(afront==NULL)
        {
            afront=temp;
            arear=temp;
            afront->link=NULL;
            arear->link=NULL;
        }
        else 
        {
            arear->link=temp;
            arear=temp;
            arear->link=NULL;
        }
    }
}
void dequeue_linkedlist()
{   
    int x;
    struct node *temp;
    if(afront==NULL)
    {
        printf("\ncondtion underflow!!");
        return;
    }
    else
    {
        printf("\ndequeued element:  %d", afront->data);
        temp=afront;
        afront=afront->link;
        free(temp);
    }
}
void show_Myqueuelinkedlist()
{   
    struct node *temp;
    temp=afront;
    if(afront==NULL)
    {
        printf("\nqueue is empty ");
    }
    else
    {
        printf("\nElements present in the queue are: \n");
        while(temp!=NULL)
        {
          printf("\n%d\n",temp->data);
          temp=temp->link;
        }   
    }
}
int Mytree()
{
    char choice;
    while(1)
    {
        printf("\n|-----------------------------------------------------------|");
        printf("\n*                    tree implementation                    *");
        printf("\n|-----------------------------------------------------------|");
        printf("\n1 - Insert an element into tree\n");
        printf("2 - Delete an element from the tree\n");
        printf("3 - Inorder Traversal\n");
        printf("4 - Preorder Traversal\n");
        printf("5 - Postorder Traversal\n");
        printf("6 - Exit\n");

        printf("\nEnter your choice : ");
        scanf("%hhd", &choice);
        switch (choice)
        {
            case 1:    
            insert_Mytree();
            break;
            case 2:    
            delete_Mytree();
            break;
            case 3:    
            inorder_Mytree(root);
            break;
            case 4:    
            preorder_Mytree(root);
            break;
            case 5:    
            postorder_Mytree(root);
            break;
            case 6:    
            exit(0);
            default :     
            printf("Invalid choice ");
            break;    
        }
    }
    return 0;
}
void insert_Mytree()
{
    create_Mytree();
    if (root == NULL) 
        root = temp;
    else    
        search_Mytree(root);    
}
void create_Mytree()
{
    int item;
 
    printf("Enter data of node to be inserted : ");
    scanf("%d", &item);
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = temp->right = NULL;
}

void search_Mytree(struct node *t)
{
    if ((temp->data > t->data) && (t->right != NULL))      
    search_Mytree(t->right);
    else if ((temp->data > t->data) && (t->right == NULL))
    t->right = temp;
    else if ((temp->data < t->data) && (t->left != NULL))
    search_Mytree(t->left);
    else if ((temp->data < t->data) && (t->left == NULL))
    t->left = temp;
}
 
void inorder_Mytree(struct node *t)
{
    if (root == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    if (t->left != NULL)    
    inorder_Mytree(t->left);
    printf("%d -> ", t->data);
    if (t->right != NULL)    
    inorder_Mytree(t->right);
}
 
void delete_Mytree()
{
    int item;
 
    if (root == NULL)
    {
        printf("No elements in a tree to delete");
        return;
    }
    printf("Enter the data to be deleted : ");
    scanf("%d", &item);
    t1 = root;
    t2 = root;
    search1_Mytree(root, item);
}

void preorder_Mytree(struct node *t)
{
    if (root == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    printf("%d -> ", t->data);
    if (t->left != NULL)    
        preorder_Mytree(t->left);
    if (t->right != NULL)    
        preorder_Mytree(t->right);
}
 
void postorder_Mytree(struct node *t)
{
    if (root == NULL)
    {
        printf("No elements in a tree to display ");
        return;
    }
    if (t->left != NULL) 
        postorder_Mytree(t->left);
    if (t->right != NULL) 
        postorder_Mytree(t->right);
    printf("%d -> ", t->data);
}
 
void search1_Mytree(struct node *t, int item)
{
    if ((item > t->data))
    {
        t1 = t;
        search1_Mytree(t->right, item);
    }
    else if ((item < t->data))
    {
        t1 = t;
        search1_Mytree(t->left, item);
    }
    else if ((item==t->data))
    {
        delete1_Mytree(t);
    }
}
 
void delete1_Mytree(struct node *t)
{
    int k;

    if ((t->left == NULL) && (t->right == NULL))
    {
        if (t1->left == t)
        {
            t1->left = NULL;
        }
        else
        {
            t1->right = NULL;
        }
        t = NULL;
        free(t);
        return;
    }
    else if ((t->right == NULL))
    {
        if (t1 == t)
        {
            root = t->left;
            t1 = root;
        }
        else if (t1->left == t)
        {
            t1->left = t->left;
 
        }
        else
        {
            t1->right = t->left;
        }
        t = NULL;
        free(t);
        return;
    }
 
    else if (t->left == NULL)
    {
        if (t1 == t)
        {
            root = t->right;
            t1 = root;
        }
        else if (t1->right == t)
            t1->right = t->right;
        else
            t1->left = t->right;
        t == NULL;
        free(t);
        return;
    }
 
    else if ((t->left != NULL) && (t->right != NULL))  
    {
        t2 = root;
        if (t->right != NULL)
        {
            k = smallest_Mytree(t->right);
            flag = 1;
        }
        else
        {
            k =largest_Mytree(t->left);
            flag = 2;
        }
        search1_Mytree(root, k);
        t->data = k;
    }
 
}
 
int smallest_Mytree(struct node *t)
{
    t2 = t;
    if (t->left != NULL)
    {
        t2 = t;
        return(smallest_Mytree(t->left));
    }
    else    
        return (t->data);
}
 
int largest_Mytree(struct node *t)
{
    if (t->right != NULL)
    {
        t2 = t;
        return(largest_Mytree(t->right));
    }
    else    
        return(t->data);
}







