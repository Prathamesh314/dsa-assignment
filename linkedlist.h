#include <stdio.h>
#include <stdlib.h>

#define srange(i, start, end) for (int i = start; i < end; i++)
#define range(i, end) srange(i, 0, end)

typedef struct stack{
  int size;
  char **arr;
  int top;
}stack;

typedef struct node
{
  char *data;
  struct node *next;
  stack *link;
} node;

node *newNode(char *data)
{
  node *temp = (node *)malloc(sizeof(node));
  temp->data = (char *)malloc(sizeof(stack));
  temp->data = data;
}

stack *create_stack(int size){
  stack *s = (stack *)malloc(sizeof(stack));
  s->size = size;
  s->arr = (char **)malloc((s->size)*sizeof(char *));
  s->top = -1;
  return s;
}

void push(stack *s,char *data){
  if(s->top = s->size-1){
    printf("Stack is FULL....\n");
  }
  else{
    s->top+=1;
    s->arr[s->top] = (char*)malloc(sizeof(char));
    s->arr[s->top] = data;
  }
}

void isEmptyLL(node *head)
{
  if (head == NULL)
    printf("SLL is empty!!!\n");
}

int lengthLL(node *head)
{
  int count = 0;
  node *temp = head;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }
  return count;
}

int searchLL(node *head, char *key)
{
  int flag, count1;
  flag = count1 = 0;
  node *temp = head;
  while (temp != NULL)
  {
    count1++;
    if (temp->data == key)
    {
      flag = 1;
      break;
    }
    temp = temp->next;
  }
  if (flag == 1)
    printf("Element is found at position %d\n .", count1);
  else
    printf("Element is not present in the linked list.\n");
  return count1;
}

void insertLL(node **head, char *item)
{
  node *ptr = newNode(item), *temp;
  if (ptr == NULL)
  {
    printf("OVERFLOW\n");
  }
  else
  {
    ptr->data = item;
    if (*head == NULL)
    {
      ptr->next = NULL;
      *head = ptr;
    }
    else
    {
      temp = *head;
      while (temp->next != NULL)
      {
        temp = temp->next;
      }
      temp->next = ptr;
      ptr->next = NULL;
    }
  }
}

void deleteAtBeginingLL(node *head)
{
  node *temp = head;
  if (temp->next == NULL)
    head = NULL;
  else
  {
    head = temp->next;
    free(temp);
  }
}

void deleteAtEndLL(node *head)
{
  node *temp = head, *previous_node;
  if (temp->next == NULL)
    head = NULL;
  else
  {
    while (temp->next != 0)
    {
      previous_node = temp;
      temp = temp->next;
    }
    previous_node->next = NULL;
    free(temp);
  }
}

void displayLL(node *head)
{
  node *temp = head;
  if (temp == NULL)
    printf("SLL is empty!!!\n");
  else
  {
    while (temp != NULL)
    {
      printf("%c ", temp->data);
      temp = temp->next;
    }
  }
}

int main(){
  char *s = "Hyderabad";
  node *head = newNode(s);
  stack *st = create_stack(10);
  head->link = st;
  char *s1 = "ASdasd";
  char *s2 = "asdsda";
  push(st,s1);
  push(st,s2);

  
  return 0;
}
