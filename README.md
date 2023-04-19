# please never use this
![Discord](https://img.shields.io/discord/1096149563871613099?style=for-the-badge&label=exploiting%20c)
![Lines of code](https://img.shields.io/tokei/lines/github/Oderjunkie/python-else?style=for-the-badge)
![Minimum C version: 99](https://img.shields.io/badge/Minimum%20C%20Version-78-blueviolet?style=for-the-badge)
![GitHub](https://img.shields.io/github/license/Oderjunkie/python-else?style=for-the-badge)

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
