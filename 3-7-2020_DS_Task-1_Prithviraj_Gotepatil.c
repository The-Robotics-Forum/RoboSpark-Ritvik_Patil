#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student{
    char* name;
    int rollno;
}student;

typedef struct Queue
{
    int arr[10];
    char* arr2[10];
    int front,rear;
}Queue;

void initialize(Queue* q){
    q->front=0;
    q->rear=0;

}


void enqueue(Queue* q,int rollno, char* name){
    q->arr[q->rear++]=rollno;
    q->arr2[q->rear++]=name;

}

/*int dequeue(Queue* q){
    return q->arr[q->front++];
}*/

int isEmpty(Queue* q){
    return q->front==q->rear;
}

void print(Queue* q){
    if(isEmpty(q)){
        //cout<<"Queue is Empty..!\n";
        printf("Queue is empty\n");
        return;
    }

    //cout<<"Front-->";
    printf("front ");
    for(int i=q->front;i<q->rear;i++)
    {
        //cout<<q->arr[i]<<" ";
        printf("%s %d  ,",q->arr2[i],q->arr[i]);
    }
    //cout<<"<--Rear";
    printf("Rear\n");
    //cout<<"\n";
}

int main()
{
    int n=3;
    Queue* q1=(Queue*)malloc(sizeof(Queue));
    initialize(q1);
    struct student s[n];
    for(int i=0;i<=n;i++)
    {
        
        printf("\nEnter student's name : ");
        scanf("%s",s[i].name);
        printf("\nEnter student's Rollno : ");
        scanf("%d",&s[i].rollno);
        if(s[i].rollno%2==0)
        {
            enqueue(q1,s[i].rollno, s[i].name);
        }
    }
    print(q1);
}