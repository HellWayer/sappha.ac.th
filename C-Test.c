#include <string.h>

int main() {
  char locker[20]
  int pass[10]
  float fl[10]

  printf('ชื่อไร: ');
  scanf("%s",locker);
  
  printf('เลขที่ไร:');
  scanf("%i",pass);
  
  printf('ชั้นไร (orly number) :');
  scanf("%f",fl);
  
  printf(
    "ชื่อ %s", &locker,
    "เลขที่ %i", &pass,
    "ชั้น %f", &fl
  );
}
