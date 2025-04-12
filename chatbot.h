#ifndef CHATBOT_H
#define CHATBOT_H

void initialize_chatbot();
void cleanup_chatbot();
char* process_user_input(const char* input);

#endif // CHATBOT_H