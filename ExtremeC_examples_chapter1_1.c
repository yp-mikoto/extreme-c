// 매크로 정의하기

#define ABC 5

int main(int argc, char** argv) {
  int x = 2;
  int y = ABC;
  int z = x + y;
  return 0;
}

/* 매크로 확장 단계 이후

int main(int argc, char** argv) {
  int x = 2;
  int y = 5;
  int z = x + y;
  return 0;
}

*/
