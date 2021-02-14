# m-shell

Learning C++ is a short-term goal of mine.

To become more antiquated with the language, I will build a very basic shell called m-shell, which will do just three things: initialize, execute commands, and terminate.

The commands allowed will be:
- Floating point addition, subtraction, multiplication and division.
- Display time
- Terminate

Plan:
- Initialize shell from UNIX -> Fork threads?
- While shell is running, each line will be open to writes
- Once line is entered and is not empty, string is written to stdin
- From stdin string is parsed, executed, erased, then repeat
- Next line becomes stdout and displays results
- After, new line is open to writes.
- Repeat until terminate
