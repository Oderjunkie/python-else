# please never use this
adds the wonderful `else` clause of `for` and `while` from python back to C78
# why are you reading this example
```c
#include <stdio.h>

/* include_as = macro: define `PY_FOR(...)` and `PY_WHL(...)` */
/* include_as = syntax_extension: same as macro, but also override `for(...)` and `while(...)` */
#define include_as syntax_extension
#include "pythonelse.h"

int main(void) {
  for (int i = 0; i < 10; i++) {
    printf("i: %d\n", i);
  } else {
    printf("stop. don't use this library. why. WHY.\n");
  }
  
  for (int i = 0; i < 10; i++) {
    printf("i: %d\n", i);
    if (i == 5) break;
  } else {
    printf("pictured: dead code\n");
  }
  return 0;
}
```
