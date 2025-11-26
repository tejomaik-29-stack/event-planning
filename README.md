**Abstract:**



This program is a simple Event Planning System written in C.


It lets users add and view events through an easy, menu-based interface.


Every event includes a name, a date, and a location, all stored using a structure.


The system offers three main options: add a new event, list all events, or exit the program.


Events are saved in an array with a fixed limit, and the program uses basic input functions to read user data.


Overall, the program demonstrates fundamental concepts in C such as structures, arrays, loops, and handling user input.



**Features of the program:**


Allows users to add events with a name, date, and location.


Stores up to 50 events using a structure-based array.

Lets users view all saved events in a simple list.

Easy-to-use menu system for navigation.

Handles basic input errors and prevents adding too many events.

Runs continuously until the user chooses to exit.


**Techincal Requirements**


A C compiler such as GCC or Clang

A system that supports standard C libraries (stdio.h, string.h)

Minimum console/terminal environment to run the program

At least 50 event entries storage capacity (handled in memory)

Basic keyboard input for user interaction


Functional Requirements:


The system must allow users to add new events.

The system must store event details (name, date, location).

The system must allow users to view all saved events.

The system must limit event storage to 50 entries.

The system must provide a menu for user interaction.

The system must allow users to exit the program.


**How to Run the Program:**


Save the code

Save the program in a file with a .c extension, for example:

event_planner.c

Open a terminal or command prompt

Compile the program

If you're using GCC, type:

gcc event_planner.c -o event_planner

Run the compiled program

./event_planner

(On Windows, run:

event_planner.exe
```)

Use the menu to add events, list events, or exit the program.
Screenshort:
<img width="416" height="122" alt="Screenshot 2025-11-27 000448" src="https://github.com/user-attachments/assets/01933c31-c439-43b7-98cb-038f268ccf51" />
