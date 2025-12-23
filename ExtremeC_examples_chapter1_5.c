#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VERSION "2.3.4"

#define LOG_ERROR(format, ...) \
  fprintf(stderr, format, __VA_ARGS__)  // __VA_ARGS__: 아직 매개변수에 할당되지 않은 나머지 입력 인수로 모두 교체하도록 지시

int main(int argc, char** argv) {
  if (argc < 3) {
    LOG_ERROR("Invalid number of arguments for version %s.\n", VERSION);
    exit(1);
  }

  if (strcmp(argv[1], "-n") != 0) {
    LOG_ERROR("%s is a wrong param at index %d for version %s.", argv[1], 1, VERSION);
    exit(1);
  }

  // ...

  return 0;
}

/* 전처리 단계 이후

... content of stdio.h ...

... content of stdlib.h ...

... content of string.h ...

int main(int argc, char** argv) {
  if (argc < 3) {
    fprintf(__stderrp, "Invalid number of arguments for version %s.\n", "2.3.4");
    exit(1);
  }

  if (strcmp(argv[1], "-n") != 0) {
    fprintf(__stderrp, "%s is a wrong param at index %d for version %s.", argv[1], 1, "2.3.4");
    exit(1);
  }



  return 0;
}

*/
