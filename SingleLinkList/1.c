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
    head->link=NULL;

    //second node
    struct node *second =(struct node*)malloc(sizeof(struct node));
    //assign value
    second->data=20;
    second->link=NULL;

    //connect head to second node
    head->link = second;
    //print the value for head

    printf("%d\n",head->data);
  
    //print the value for second node
    printf("%d\n",second->data);
    

    return 0;
}