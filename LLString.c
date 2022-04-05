#include <stdio.h>
#include <stdlib.h>

typedef struct List
{
  Node *head, *tail;
  int length;
}List;

typedef struct Node
{
  struct Node *next;
  char data;
}Node;

void displayMenu(void);
int processString(int option);
List *createList(char *str);

List *createList(char *str)
{

}

void displayMenu()
{
  printf("\t\t*--------------------------------------*\t\t\n");
  printf("\t\t|======================================|\t\t\n");
  printf("\t\t|==========|      MENU      |==========|\t\t\n");
  printf("\t\t|======================================|\t\t\n");
  printf("\t\t|--------------------------------------|\t\t\n");
  printf("\t\t|    OPERATION    |   PLEASE PRESS...  |\t\t\n");
  printf("\t\t|--------------------------------------|\t\t\n");
  printf("\t\t|   Print String  |         1          |\t\t\n");
  printf("\t\t|--------------------------------------|\t\t\n");
  printf("\t\t|  Replace Letter |         2          |\t\t\n");
  printf("\t\t|--------------------------------------|\t\t\n");
  printf("\t\t|   Delete Letter |         3          |\t\t\n");
  printf("\t\t|--------------------------------------|\t\t\n");
  printf("\t\t|   Censor Letter |         4          |\t\t\n");
  printf("\t\t|--------------------------------------|\t\t\n");
  printf("\t\t|   Count Letters |         5          |\t\t\n");
  printf("\t\t|--------------------------------------|\t\t\n");
  printf("\t\t| Arrange (alpha) |         6          |\t\t\n");
  printf("\t\t|--------------------------------------|\t\t\n");
  printf("\t\t| Reverse (alpha) |         7          |\t\t\n");
  printf("\t\t|======================================|\t\t\n");
  printf("\t\t*--------------------------------------*\t\t\n");
  printf("\t\tFor more information on each operation,\n \t\tplease press *\t\t\n\n");

}

int processString(int option)
{
  return 0;
}

int main(int argc, char** argv)
{
    displayMenu();
    // create Menu function for all options to be done on string
    processString();
    // Create a switch to proceed with task

    return 0;
}
