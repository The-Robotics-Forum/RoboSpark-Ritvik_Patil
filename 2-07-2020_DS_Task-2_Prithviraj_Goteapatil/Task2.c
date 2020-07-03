#include <stdio.h>
#include <stdlib.h>
int push(char element, char *arr, int top)
{   
    
        top = top + 1;
        arr[top] = element;
        return top;      
}



int pop(char *arr, int top)
{   
    if(top == -1)
    {
        printf("\nUnbalanced");
        return top;
    }
    else
    {
       //printf("\nPoped Element is : %s \n", arr[top]);
        top = top - 1;
        return top;
    } 
}

int main()
{
    char arr[100];
    int top = -1; 
    int i =0;
    printf("enter the brackets ");
    scanf("%s",arr);
    while (arr !='\0')
    {
        if(arr[i] == '(')
        {
            top = push(arr[i],arr,top);

        }
        else if(arr[i]==')')
        {
            top = pop(arr,top);

        }
        i++;
    }
  if(top==-1)
  {
      printf("\nbalanced");
  }
  else
  {
      printf("\nUnbalanced");
  }

}
