# DeskPilot

DeskPilot is a simple C++ text-based desktop assistant that executes system commands.

## 🚀 Features
- Command-based desktop automation
- Custom user-defined commands
- Persistent command storage (commands.txt)
- Real-time command execution

## 🛠 Example
add yt start chrome https://youtube.com
yt

## Commands

open chrome  
open vscode  
open youtube  
open downloads  
exit  

## Project Structure

DeskPilot
│
├── docs
├── include
│   └── commands.h
│
├── src
│   ├── main.cpp
│   └── commands.cpp
│
└── README.md

## Compile

g++ src/main.cpp src/commands.cpp -o deskpilot

## Run

deskpilot
