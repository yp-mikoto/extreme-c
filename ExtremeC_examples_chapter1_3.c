// 루프를 생성하는 매크로 사용하기

#include <stdio.h>

#define PRINT(a) printf("%d\n", a);
#define LOOP(v, s, e) for (int v = s; v <= e; v++) {
#define ENDLOOP }

int main(int argc, char** argv) {
  LOOP(counter, 1, 10)
  PRINT(counter)
  ENDLOOP
  return 0;
}

/* 전처리 단계 이후

... (content of stdio.h)

int main(int argc, char** argv) {
  for (int counter = 1; counter <= 10; counter++) {
    printf("%d\n", counter);
  }
  return 0;
}

*/

// DSL(Domain-Specific Language):
//   특정한 영역(도메인)의 문제를 해결하기 위해 설계된 프로그래밍 또는 명세 언어

// 테스트 프레임워크에서 DSL은
//   assertion, expectation 테스트 시나리오를 작성하는 데에 사용
