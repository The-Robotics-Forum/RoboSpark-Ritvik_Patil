#include<stdio.h>
#include<stdlib.h>
struct node
{
    int key,flag;
    struct node *left,*right;
};
struct node *new_node(int item)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node ));
    temp->key=item;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
struct node *create_node(struct node *node,int item)
{
    if(node==NULL)
        return new_node(item);
    else if(item<node->key)
        node->left=create_node(node->left,item);
    else if(item>node->key)
        node->right=create_node(node->right,item);
    return node;
}
struct node * minValueNode(struct node* node)
{
    struct node* current=node;
    while (current && current->left != NULL)
        current = current->left;

    return current;
}
struct node* deleteNode(struct node* root, int key)
{
    if (root==NULL) return root;
    if (key<root->key)
        root->left=deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        struct node* temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

void printInorder(struct node* node)
{
     if (node == NULL)
          return;
     printInorder(node->left);
     printf("%d ", node->key);
     printInorder(node->right);
}


int main()
{
    struct node* root=NULL;
   int item,choice,i=2,dis,rec;
   while(i==2)
   {
    printf("1.CREATE / INSERT");
    printf("\n2.DELETE");
    printf("\n3.DISPLAY");
    printf("\n\nENTER YOUR CHOICE  :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("\nENTER THE KEY:");
        scanf("%d",&item);
        if(root==NULL)
            root=create_node(root,item);
        else
            create_node(root,item);
        break;
        case 2:printf("\nENTER THE KEY YOU WANT TO DELETE:");
        scanf("%d",&item);
        deleteNode(root,item);
        break;
        case 3:
            printf("INORDER TRAVERSAL\n");
                       printInorder(root);
        break;
    }
    printf("\n\nPRESS 2 TO CONTINUE\t\t");
    scanf("%d",&i);
   }
   return 0;

}
