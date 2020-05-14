#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
	struct node *next;
};
typedef struct node Node;

int main(int argc, char *argv[]){
    Node a,b,c;
    Node *ptr=&a;
    
    a.data=1;
    a.next=&b;
    b.data=3;
    b.next=&c;
    c.data=4;
    c.next=NULL;
    
    while(ptr!=NULL){
    	//print adress
        printf("address=%p, ",ptr);
	    //print data
        printf("data=%d ",ptr->data);
	    //print next address
        printf("next=%p\n",ptr->next);
	    //point to next
        ptr=ptr->next;
    }
    
    system("PAUSE");
    return 0;
}