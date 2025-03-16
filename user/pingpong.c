//
// Created by ZHIRAN on 2025/3/16.
//
#include "kernel/types.h"
#include "user/user.h"
int main() {
  char buf[16];
  if (fork() == 0){
    int pidc = getpid();
    itoa(pidc,buf);
    write(1, buf, strlen(buf));
    write(1, ": received ping", 14);
    exit(1);
  } else{
    int pid = getpid();
    itoa(pid,buf);
    write(1, buf, strlen(buf));
    write(1, ": received pong", 14);
    }
}