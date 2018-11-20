# SYSTEM-SOFTWARE-LAB

[![download](https://img.shields.io/badge/Download-zip-blue.svg?logo=appveyor&longCache=true&style=for-the-badge)](https://github.com/KTU-CSE/System-Software-lab/zipball/master)
[![website](https://img.shields.io/badge/Live-website-green.svg?logo=appveyor&longCache=true&style=for-the-badge)](https://abhijithvijayan.github.io/System-Software-lab/)

B.Tech CSE S5 System Software Lab

Batch: CSE 2k16-20, College of Engg. Adoor

University: APJ Abdul Kalam Technological University

## Content

- **[CPU Scheduling](CPU%20Scheduling/README.md)**

  - [FCFS Scheduling](CPU%20Scheduling/FCFS/README.md)
  - [SJF Scheduling](CPU%20Scheduling/SJF/README.md)
  - [Priority Scheduling](CPU%20Scheduling/Priority/README.md)
  - [Round Robin scheduling](CPU%20Scheduling/RoundRobin/README.md)

- **[Memory Management](Memory%20Management/README.md)**

  - [Single-Level Directory-File Organisation Technique](Memory%20Management/SingleLevelDir/README.md)
  - [Two-Level Directory-File Organisation Technique](Memory%20Management/TwoLevelDir/README.md)

- **[Deadlocks](Deadlocks/README.md)**

  - [Banker's Algorithm](Deadlocks/BankersAlgorithm/README.md)

- **[Disk Management](Disk%20Management/README.md)**

  - [FCFS Disk Scheduling](Disk%20Management/FCFS/README.md)
  - [SCAN Disk Scheduling](Disk%20Management/SCAN/README.md)
  - [C-SCAN Disk Scheduling](Disk%20Management/CSCAN/README.md)

- **[Virtual Memory](Virtual%20Memory/README.md)**

  - [FIFO Page Replacement Algorithm](Virtual%20Memory/FIFO/README.md)
  - [LRU Page Replacement Algorithm](Virtual%20Memory/LRU/README.md)
  - [LFU Page Replacement Algorithm](#)                      // toBeDone

- **[Process Synchronization](Process%20Synchronization/README.md)**
  - [Producer Consumer Problem](#)          // toBeDone
  - [Dining Philosophers Problem](#)        // toBeDone
  - [Pass 1 of a Two Pass Assembler](#)     // toBeDone
  - [Pass 2 of a Two Pass Assembler](#)     // toBeDone
  - [Single Pass Assembler](#)              // toBeDone
  - [Absolute Loader](#)                    // toBeDone
  - [Symbol Table With Hashing](#)          // toBeDone

<hr />

## Requirements

1. GCC Compiler --> [TDM-GCC MinGW Compiler](https://sourceforge.net/projects/tdm-gcc/)

 2. Any Text Editor of your preference 
    - [VS Code](https://code.visualstudio.com/) 
    - [Sublime Text](https://www.sublimetext.com/)  
    - [Atom](https://atom.io/)
    - [Brackets](http://brackets.io/)

## What each directory in this repo contains

```
1) CPU Scheduling
	└──── FCFS Scheduling
	└──── SJF Scheduling
	└──── Priority Scheduling
	└──── Round Robin scheduling
    
2) Memory Management
	└──── Single-Level Directory-File Organisation Technique
	└──── Two-Level Directory-File Organisation Technique

3) Deadlocks
	└──── Banker's Algorithm

4) Disk Management
	└──── FCFS Disk Scheduling
	└──── SCAN Disk Scheduling
	└──── C-SCAN Disk Scheduling

5) Virtual Memory
	└──── FIFO Page Replacement Algorithm
	└──── LRU Page Replacement Algorithm
	└──── LFU Page Replacement Algorithm

6) Process Synchronization
	└──── Producer Consumer Problem
	└──── Dining Philosophers Problem
	└──── Two Pass Assembler
        |      └──── Pass 1 of a Two Pass Assembler
        |      └──── Pass 2 of a Two Pass Assembler
	└──── Single Pass Assembler  
	└──── Absolute Loader
	└──── Symbol Table With Hashing
```

## Getting Started

Clone this repo
```
$ git clone https://github.com/KTU-CSE/System-Software-lab.git
```
Switch to the program folder
```
$ cd the/dir/where/program/file/is
```
Compile the source code
```
$ gcc yourProgramFile.c
```
To Execute
``` 
$ ./a.out
```

## License  
This project is licensed under the MIT License - see the [LICENSE.md](LICENSE) file for details

## Spread the word
Liked the project? Just give it a star :star: and spread the word!