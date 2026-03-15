# DeskPilot

DeskPilot is a simple C++ text-based desktop assistant that executes system commands.

## Features

- Open applications using text commands
- Lightweight CLI tool
- Modular C++ structure

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