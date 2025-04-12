#ifndef GOOGLE_API_H
#define GOOGLE_API_H

#include <stddef.h>

int call_google_api(const char* query, char* response, size_t response_size);

#endif // GOOGLE_API_H