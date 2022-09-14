#include <stdio.h>
#include <string.h>

int main() {
  printf("\nจัดทำโดย ด.ช.ภูมิพัฒฐ์ เรือนใจดี\n\n*************************\n");


  printf("\n       คุณชื่ออะไร");
  
  char locker1[20];
  
  printf("\n\nกรุณาป้อนชื่อ: ");
  scanf("%s", &locker1);
  
  printf("\nคุณชื่อ: %s",  locker1);
  printf("\n\n*************************\n");
  
  int locker2;
  
  printf("\n       คุณอายุเท่าไร\n\nกรุณาป้อนอายุ: ");
  scanf("%i", &locker2);
  
  printf("\nคุณมีอายุ: %i", locker2);
  printf("\n\n*************************\n\n");
  
  printf("       ครูผู้สอนวิชานี้ชื่อว่าอะไร");
  
  char locker3[20];


  printf("\n\nกรุณาป้อนชื่อ: ");
  scanf("%s", &locker3);

  printf("\nครูผู้สอนมีชื่อว่า: %s", locker3);
  printf("\n\n*************************\n\n");
}
