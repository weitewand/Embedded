## Embedded Software Design with C
#### by Kai Qian, David den Haring, Li Cao

### Short Summary

Book about embedded systems. Focuses on the software design but also says a thing or two about the hardware for embedded systems. Also a focus on labs and hands on activities with a certain microcontroller. *I will have to see if I can do the same thing with a microcontroller I have at hand. Or just do similar stuff I can do.*

### 1 Introduction to Embedded Systems

#### Summary/Commentary

#### 1.1 Overview

  - special-purpose computing device designed to perform dedicated functions
  - once the software is flashed onto the device it can not be changed while operating (unlike on a normal computer)

#### 1.2 Categories of Embedded Systems

  - Stand-alone embedded systems 
    * works self-contained
    * What is a not stand-alone embedded system? Something that works in a network?
  - Real-time embedded systems
    * Some particular work/task must be done in a certain amount of time. Not only functional correctness has to be met, but also a time constraint has to be fulfilled.
    * Hard real-time systems: not meeting the time constraint leads to loss of life oder damage of property; response time deadline usually in $ms$ or even shorter; examples: missile control, air monitoring, some medical devices, air bag control; often interects with physical hardware directly, not through human being; has to be tested rigorously including a worst case execution (WCET) analysis.
    * Soft real-time systems: there are some response time constraints but lateness can be tolerated to some degree

#### 1.3 Application Areas of Embedded Systems

#### 1.4 Characteristics of Embedded Systems

#### 1.5 Hardware Overview

### 2 Embedded Software Design and Development

### 3 8051 Microcontroller

### 4 Embedded C Programming with 8051

### 5 Real-Time Operating Systems

### 6 Serial Communications

### 7 Survey of Popular Microcontrollers

### 8 Ethernet Applications and the Future of Microcontrollers

### 9 Hands-On Labs

### Appendix A C Programming Primer

### Appendix B Getting Started with the Keil µ Vision IDE

### Appendix C Getting Started with Silicon Laboratories C8051F005DK Development

### Appendix D Counter with 7-Segment Numeric Display
