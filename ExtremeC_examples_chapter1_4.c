// 매크로에서 #과 ## 연산자 사용하기

#include <stdio.h>
#include <string.h>

#define CMD(NAME)            \
  char NAME##_cmd[256] = ""; \
  strcpy(NAME##_cmd, #NAME);

int main(int argc, char** argv) {
  CMD(copy)
  CMD(paste)
  CMD(cut)

  char cmd[256];
  scanf("%s", cmd);

  if (strcmp(cmd, copy_cmd) == 0) {
    //
  }
  if (strcmp(cmd, paste_cmd) == 0) {
    //
  }
  if (strcmp(cmd, cut_cmd) == 0) {
    //
  }
  return 0;
}

// # 연산자: 매개변수를 한 쌍의 따옴표로 둘러싼 문자 형태로 변환
// ## 연산자: 매개변수와 다른 요소를 문자열로 결합해 변수 이름을 만든다.

/* 전처리 단계 이후

... (content of stdio.h)

... (content of string.h)

int main(int argc, char** argv) {
  char copy_cmd[256] = ""; __builtin___strcpy_chk (copy_cmd, "copy", __builtin_object_size (copy_cmd, 2 > 1 ? 1 : 0));
  char paste_cmd[256] = ""; __builtin___strcpy_chk (paste_cmd, "paste", __builtin_object_size (paste_cmd, 2 > 1 ? 1 : 0));
  char cut_cmd[256] = ""; __builtin___strcpy_chk (cut_cmd, "cut", __builtin_object_size (cut_cmd, 2 > 1 ? 1 : 0));

  char cmd[256];
  scanf("%s", cmd);

  if (strcmp(cmd, copy_cmd) == 0) {

  }
  if (strcmp(cmd, paste_cmd) == 0) {

  }
  if (strcmp(cmd, cut_cmd) == 0) {

  }
  return 0;
}

*/
