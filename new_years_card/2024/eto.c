#include <stdio.h>
#include <unistd.h>
int main() {
 pid_t pid; int pipefd[2]; pipe(pipefd);
 int year = 2024;
 char eto[7]; // KANJI chars 6 octets and null chars 1 octet.
 pid = fork();
 if (pid == 0) {
  int gan = (year - 4) % 10; // 干
  const char *gans[] = {"甲", "乙", "丙", "丁", "戊", "己", "庚", "辛", "壬", "癸"};
  int zhi = (year - 4) % 12; // 支
  const char *zhis[] = {"子", "丑", "寅", "卯", "辰", "巳", "午", "未", "申", "酉", "戌", "亥"};
  sprintf(eto, "%s%s", gans[gan], zhis[zhi]);
  write(pipefd[1], eto, 7);
 } else {
   read(pipefd[0], eto, 7);
   printf(">> %d年の干支は「%s」\n", year, eto);
   return 0;
 }
}
