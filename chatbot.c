#include <stdio.h>
#include <string.h>
#include "chatbot.h"

// Function to initialize the chatbot
void initialize_chatbot() {
    printf("Chatbot initialized. Ready to chat!\n");
}

// Function to clean up resources used by the chatbot
void cleanup_chatbot() {
    printf("Chatbot resources cleaned up. Goodbye!\n");
}

// Function to process user input and generate a response
char* process_user_input(const char* input) {
    static char response[256];

    // Check for specific inputs and provide responses
    if (strcmp(input, "hi") == 0 || strcmp(input, "hello") == 0) {
        snprintf(response, sizeof(response), "Hello! How can I assist you?");
    } else if (strcmp(input, "who are you") == 0) {
        snprintf(response, sizeof(response), "I am your friendly chatbot, here to help!");
    } else if (strcmp(input, "how are you") == 0) {
        snprintf(response, sizeof(response), "I'm just a program, but I'm functioning as expected!");
    } else if (strcmp(input, "thank you") == 0 || strcmp(input, "thanks") == 0) {
        snprintf(response, sizeof(response), "You're welcome! Let me know if you need anything else.");
    } else if (strcmp(input, "exit") == 0) {
        snprintf(response, sizeof(response), "Goodbye! Have a great day!");
    } else {
        // Default response for unrecognized inputs
        snprintf(response, sizeof(response), "I'm sorry, I don't understand '%s'. Can you rephrase?", input);
    }

    return response;
}