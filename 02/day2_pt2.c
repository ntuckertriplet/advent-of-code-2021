#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int horizontal = 0, depth = 0, aim = 0;

  FILE* file = fopen("input.txt", "r");
  char line[256];
  while(fgets(line, sizeof(line), file)) 
  {
    if (strncmp(line, "forward", 7) == 0)
    {
      printf("adding to horizontal: %d\n", (line[8] - '0') * aim);
      horizontal += (line[8] - '0');
      depth += aim * (line[8] - '0');
    }
    else if (strncmp(line, "down", 4) == 0) 
    {
      printf("adding to depth: %d\n", line[5] - '0');
      aim += (line[5] - '0');
    }
    else if (strncmp(line, "up", 2) == 0) 
    {
      printf("subtracting from depth: %d\n", line[3] - '0');
      aim -= (line[3] - '0');
    }
  }

  printf("final: %d\n", depth * horizontal);
  return 0;
}
