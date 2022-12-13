// your name surname and age from user
#include <stdio.h>

int main(){
  char name[20], surname[30];
  int age ;
  printf("Enter your name: ");
  scanf("%s",name);
  
  printf("Enter your surname: ");
  scanf("%s",surname);
  
  printf("Enter your age: ");
  scanf("%d",&age);
  
  printf("Your name is %s your surname is %s your age is %d ",name,surname,age);
  
  return 0;
}
