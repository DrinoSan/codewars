#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *pad_and_print(char *string, int pad_level) {
  char pad[pad_level + 1];
  for (int i = 0; i < sizeof(pad); ++i) {
    pad[i] = ' ';
  }
  pad[pad_level + 1] = '\0';

  int len = 0;
  while (true) {
    if (string[len] == '\0') {
      break;
    }
    ++len;
  }

  char *padded_string = (char *)malloc(pad_level * sizeof(char) + len + 1);

  memcpy(padded_string, pad, pad_level);
  memcpy(padded_string + pad_level, string, len);

  return padded_string;
}

int main() {
  char name[] = "Ben Dover";

  for (int i = 0; i < sizeof(name); ++i) {
    char *str = pad_and_print(name, i);
    printf("Padded string by %d, \t\tis: %s", i, str);
    free(str);
    printf("\n");
  }

  printf("\n");
}