#ifndef CHATBOT_SERVER_H
#define CHATBOT_SERVER_H

void start_server();
void handle_input(const char* input, char* response, size_t response_size);

#endif // CHATBOT_SERVER_H

