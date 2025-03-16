//
// Created by ZHIRAN on 2025/3/16.
//

// 1. 未传参 打印错误信息
// 2. 使用 atoi
// 3. 使用系统调用 sleep()
// 4. 完成 main 调用 exit()退出
#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
  if (argc != 2){
    printf("Usage: sleep <seconds>\n");
    exit(0);
  }
  sleep(atoi(argv[1]));
  exit(1);
}

