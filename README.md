# SatelliteTracker 
Project by Ivaylo Marinov (141425112)

This program is a simple satellite tracking simulation written in the C programming language.
The goal of this project is to practice basic C concepts such as loops, variables, user input, and output.

The program does not track real satellites. Instead, it simulates a satellite moving around the Earth by updating its position over time.

This project was created as part of a university programming assignment for learning purposes.

# What does it do?
Asks the user to enter a satellite name

Asks the user to enter the satellite’s speed (in degrees per second)

Updates the satellite’s position every second

# Shows:

The current position in orbit (degrees)

The total distance traveled (kilometers)

Runs continuously until the user stops it by pressing "ctrl + C"

#How it works

The orbit is represented as a circle from 0 to 360 degrees

Each second, the position increases by the entered speed

When the position reaches 360 degrees, it starts again from 0

Distance is calculated using a simple approximation:

1 degree ≈ 111 kilometers

This makes the math easier and keeps the program simple.

# Programming Concepts Used

Variables and data types (float, char)

while loop

if statement

User input using scanf

Output using printf

Simple math calculations

sleep() function to simulate real time

# Libraries Used

stdio.h – input and output

unistd.h – pause the program for one second

stdbool.h – boolean values (true and false)

# How to compile it?
$ make satellite

# How to run the program?
$ ./satellite

# Example Output

Satellite name: ISS
Speed (degrees per second): 0.0167

Satellite: ISS | Position: 0.0167° | Distance: 1.85 km
Satellite: ISS | Position: 0.0334° | Distance: 3.70 km


# Conclusion

This project helped me understand how loops work in real-time programs and how simple math can be used to simulate movement. It was useful for practicing basic C programming skills.
