// Run:
//
//   $ gcc main.c -o main
//   $ ./main
//

#include <stdio.h>
#include <string.h>

typedef char* string_t;

typedef struct ConfigEntry {
  int modulo;
  string_t message;
} ConfigEntry;

int fizzbuzz(int limit, ConfigEntry* config, string_t* result) {
  // NOTE: This is wrong
  result[0] = config[0].message;

  return 1;
}

int main(int argc, char *argv[]) {
  int limit = 10;
  string_t result[limit];
  ConfigEntry config[] = {
    { .modulo = 3, .message = "Fizz" },
    { .modulo = 5, .message = "Buzz" },
  };

  printf("limit %d\n", limit);
  printf("config (%d, %s)\n", config[0].modulo, config[0].message);
  printf("config (%d, %s)\n", config[1].modulo, config[1].message);

  int size = fizzbuzz(limit, config, result);

  for (int i = 0; i < size; i++)
    printf("%s\n", result[i]);

  return 0;
}
