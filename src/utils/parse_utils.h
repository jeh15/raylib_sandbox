#ifndef PARSE_UTILS
#define PARSE_UTILS

#include <stdbool.h>
#include "cJSON.h"

extern char* read_file(const char *filename);
extern cJSON* parse_file(const char* filename);

#endif
