// function-like macro

#define ADD(a, b) a + b

int main(int argc, char** argv) {
  int x = 2;
  int y = 3;
  int z = ADD(x, y);
  return 0;
}

/* 전처리와 매크로 확장 이후

int main(int argc, char** argv) {
  int x = 2;
  int y = 3;
  int z = x + y;
  return 0;
}

*/

// 매크로는 컴파일 단계 이전에만 존재

// 변환 단위(translation unit) 혹은 컴파일 단위(compilation unit):
//   컴파일러로 전달될 준비가 된, 전처리된 C 코드
