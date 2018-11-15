#include <stdio.h>
#include <stdlib.h>
struct list{
    int num;
    struct list* next;
};
struct list* createList(int num){
    struct list* temp = (struct list*) malloc(sizeof(struct list));
    temp->num = num;
    temp->next = NULL;
}

struct list* addList(struct list* currlist, struct list* newlist){

    currlist->next = newlist;
    currlist = currlist->next;

}

void print(struct list* l){
    l = l->next;//skip head
    while(l != NULL){
        printf("%d\n",l->num);
        l =l->next;
    }
}


void main(int argc, char* argv[]){
    //Creat a head
    struct list* head = (struct list*) malloc(sizeof(struct list));
    struct list* currlist = head;
    struct list* temp = NULL;
    int count;
    int num;
    
    if(argc > 1){

        count = atoi(argv[1]);
    }

    else{
        count =10;
    }
   


    for(int i=0; i<count; i++){
        num = rand()%100+1;
        temp = createList(num);
        currlist = addList(currlist, temp);
    }
    print (head);

 

    /*for(int i=1; i<argc;i++){

        printf("%s\n",argv[i]);
    }*/


}

