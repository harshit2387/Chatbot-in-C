# Chatbot Project

This project implements a simple chatbot that utilizes the Google API to process user queries and generate responses.

## Project Structure

```
chatbot-project
├── src
│   ├── main.c          # Entry point of the application
│   ├── chatbot.c       # Chatbot logic implementation
│   ├── chatbot.h       # Header file for chatbot functions
│   ├── google_api.c    # Google API interaction implementation
│   └── google_api.h    # Header file for Google API functions
├── include
│   └── config.h        # Configuration settings and constants
├── lib                 # Directory for external libraries
├── Makefile            # Build instructions for the project
└── README.md           # Documentation for the project
```

## Setup Instructions

1. Clone the repository:
   ```
   git clone <repository-url>
   cd chatbot-project
   ```

2. Install any required dependencies. Ensure you have the necessary libraries for Google API interaction.

3. Build the project using the Makefile:
   ```
   make
   ```

4. Run the chatbot:
   ```
   ./chatbot
   ```

## Usage Guidelines

- Upon running the chatbot, you will be prompted to enter your queries.
- The chatbot will process your input and respond using the Google API.
- Type 'exit' to terminate the chatbot session.

## Contributing

Feel free to submit issues or pull requests for improvements and bug fixes.