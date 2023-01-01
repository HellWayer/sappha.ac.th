#include <stdio.h>
#include <string.h>

int main() {
  char w[20];
  
  printf("\nEnter a password: ");
  scanf("%s", w);
      
  if (strcmp(w, "password") == 0) {  
  printf("\n\n---------------------\n-                   -\n-    Password OK    -\n-                   -\n-        ✅         -\n-                   -\n---------------------\n");
  } else {
    printf("\n\n---------------------\n-                   -\n- Password is Wrong -\n-                   -\n-        ❌         -\n-                   -\n---------------------\n\n");
  }
  return 0;
}
