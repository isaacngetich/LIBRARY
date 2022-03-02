#include <stdio.h>
#include <stdlib.h>

int menu()
{
   int action;
   printf("1. select an action below\n");
   printf("2. add new patron\n");
   printf("3. view all books\n");
   printf("4. add new book\n");
   printf("your action:  ");
   scanf("%d",&action);
   if(action < 1 || action > 4){
        printf("Invalid Action. Try again\n");
   }
   return 0;

}


void execute_action(int action) {
    switch(action) {
    case 1:
        printf("adding new patron\n");
        break;
    case 2:
        printf("adding new patron\n");
        break;
    case 3:
        printf("adding new patron\n");
        break;
    case 4:
        printf("adding new patron\n");
        break;

        default: printf("invalid action.\n");
    }

}

 int main()

{
    printf("COUNTY LIBRARY SYSTEM\n");
    printf("welcome Mr. Isaac\n");
    execute_action(menu());
    return 0;
}
