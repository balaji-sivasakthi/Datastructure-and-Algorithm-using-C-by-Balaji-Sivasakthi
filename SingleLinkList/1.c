#include <stdio.h>
#include <stdlib.h>
int main(){
    

    //Create a structure for Node
    struct node 
    {
        int data ;
        struct node *link;
    };
    
    //create head node
    struct node *head = NULL;
    head=(struct node*)malloc(sizeof(struct node));
    //assign value
    head->data=10;
    head->link=(struct node*)malloc(sizeof(struct node));
    
    struct node *first = head->link;
    first->data=20;
    first->link=NULL;

    //print the vale
    printf("%d",first->data);

    return 0;
}