#include<stdio.h>
#include<stdlib.h>
#define MAX 5
#define visted 1
#undefine visted 0
void addq(int data){
	
	if(rear>=MAX-1){
		printf("\n Queue is full\n");
		return;
	}
	rear++;
	q[rear]=data;
	if(front==-1){
		front++;
		
	}
}

void delq(){
	if(front==-1){
		printf("\nQueue is empty\n");
		return;
	}
	q[front]=0;
	if(front==rear){
		front=rear=-1;
	}
	else{
		front++;
	}
}
struct graphNode
{
    int data;
    struct graphNode *next;
};
struct graphNode *arr[MAX];
int vertex_list[MAX] = {1,2,3,4,5};
struct graphNode *createList(int vertex)
{
    struct graphNode *r;
    int data;
    printf("vertex %d connected to:",vertex);
    scanf("%d",&data);
    if(data==-1)
    {
        return NULL;
    }
    r = (struct graphNode *)malloc(sizeof(struct graphNode));
    r-> data =data;
    r-> next = createList(vertex);
    return r;
}
void bfs(int cwv)
{
	int vli=0;
	visted_list[vli]=cwv;
	vli++; 
	printf("%d",cwv);
	addq(cwv);
	find_index(cwv);
	struct graphNode *adjecent=arr[find _index(cwv)];
	
	//rule 2
	int i=0;
	int flag;
	while(front=!-1)
	{
		while(adjacent != NULL)
		{
			flag =unvisted;
            	for(i=0;i<MAX;i++)
                 	{
	                  	if adjacent->data== visted_list[i]
	                       	{
		                     	flag=visted;
		                          	break;
	                     	}
                 	}
             	if(flag == unvisted )
                 	{
		              vli++;
	                  visted_list[vli]=adjacent->data;
	                  print("%d",adjacent->data);
		              addq(adjacent-> data);
	   	              adjacent=adjacent->next;
                	}
            	else
                	{
	                	adjacent=adjacent->next;
                 	}
		}
		 delq();
		 cwv=q[front];
		 adjacent=arr[find_index(cwv)];
	}
}
void find_index( int cwv);
{
	int i=0;
	for(i=0;i<MAX;i++)
	{
		if (cwv==vertex_list[i])
             {
             	return i;
			 }		
	}
}


int main()
{
	int i;
	for(i=0; i<MAX; i++)
	{
		arr[i] = createList(vertex_list[i]);
	}
	for(i=0; i<MAX; i++)
	{
		printf("\nAdjacent of %d: \n" , vertex_list[i]);
		struct graphNode *temp = arr[i];
		
		while(temp != NULL)
		{
		printf("\t%d", temp->data);
		temp = temp->next;
		}
	}
	
	bfs(1);
 
	return 0;
}

	



