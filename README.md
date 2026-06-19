# Smart Alarm and Reminder System

## Description

The Smart Alarm and Reminder System is a console-based C++ application that allows users to set multiple alarms with personalized reminder messages. The program continuously monitors the system time and automatically triggers alarms when the specified time is reached, helping users manage their daily tasks and schedules effectively.

## How to Use

1. Run the program.
2. Enter the number of alarms you want to create.
3. For each alarm, enter:

   * Hour (HH)
   * Minute (MM)
   * Second (SS)
   * A custom reminder message
4. The program displays all the scheduled alarms.
5. The system continuously checks the current time.
6. When the current time matches an alarm time:

   * The reminder message is displayed.
   * A beep sound is produced.
7. The alarm is triggered only once and will not repeat automatically.

## Features

### Multiple Alarm Support

Users can create and manage multiple alarms in a single session.

### Custom Reminder Messages

Each alarm can have its own personalized message, making reminders more meaningful and organized.

### Real-Time Monitoring

The system continuously checks the current system time and activates alarms at the exact specified time.

### Audio Notification

A beep sound is generated when an alarm is triggered, ensuring the user receives an audible alert.

### One-Time Trigger Mechanism

Once an alarm is activated, it is marked as triggered to prevent repeated notifications.

### Object-Oriented Design

The project is implemented using Object-Oriented Programming concepts such as inheritance, abstraction, and polymorphism, making the code modular and maintainable.

### Dynamic Alarm Storage

Alarms are stored using the STL Vector container, allowing efficient management of multiple alarms.

### Second-Level Accuracy

Users can specify hours, minutes, and seconds for precise alarm scheduling.

### Continuous Execution

The program keeps running in the background until it is manually terminated.

## Technologies Used

* C++
* Object-Oriented Programming (OOP)
* STL Vector
* System Time Functions (`time()`, `localtime()`)
* Windows Sleep Function (`Sleep()`)

## OOP Concepts Used

* Classes and Objects
* Inheritance
* Abstract Base Class
* Pure Virtual Functions
* Runtime Polymorphism
* Constructors and Destructors
* Dynamic Memory Allocation
* Encapsulation
