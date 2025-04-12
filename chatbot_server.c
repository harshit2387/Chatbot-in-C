#include <stdio.h>
#include <string.h>
#include "chatbot_server.h"

void handle_input(const char* input, char* response, size_t response_size) {
    snprintf(response, response_size, "You said: %s", input);
}

void start_server() {
    printf("Chatbot server started. Listening for connections...\n");
}