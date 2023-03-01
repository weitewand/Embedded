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
    * Soft real-time systems: there are some response time constraints but lateness can be tolerated to some degree, allocation of bandwidth and resources to the tasks is a design focus; latency delays in seconds can often be tolerated; exp: washing machines & microwaves
	  * Many real-time systems have hard and soft events mixed.
  - Networked embedded systems
    * Embedded systems that are connected to a network (e.g. LAN, WAN, or the internet), either wireless or by wire. Exp.: home security system: connected in a LAN via TCP/IP protocoll but may also connected to a web-based security cam via HTTP protocoll.
	  * Pervasive computing: very tiny or even invisible embedded systems covering whole areas/environments (either mobile or attached to objects)
 	  * Embedded web server: all embedded devices are connected to a webserver and can be controlled via a browser
  - Categorisation by scale also possible: small scale: 8-16 bit µp or µC with on-chip RAM and ROM; medium scale: 16-32 bit µP or µC eith external RAM and ROM; large scale: multiple 32-bit or 64-bit chips in a networked system doing distributed jobs

#### 1.3 Application Areas of Embedded Systems

  - pretty much everywhere: from consumer electronics to large traffic control system to factory control system, from from very low cost and very large market to very high cost ans few markets, from medical instruments to aerospace and weapon control devices
  - reports estimate that an aversge US-household has 50 µC embedded in devices at home *number probably increasing a lot in the future*

#### 1.4 Characteristics of Embedded Systems

  - all dedicated to perform specific jobs
  - standard lifetime: rather long (over 5 years)
  - high-volume embedded systems: System on Chip (SoC), Application-Specific Intergrated Circuit (ASIC), Field-Programmable gagted Arrey (FPGA) 
  - Reliability is a very important aspect of embedded systems: Embedded systems are often expected to run for years without faults without updates or bug-fixes and to tolerate errors by themselves. Therefore, they are much mor thouroughly tested than applications for PCs. There is often no possibility to shut them down for maintanance (e.g. aerospace systems) or it is very expensive to shut them down (e.g. telephone switches or factory controls)
  - in short: running 24/7/365, no maintanance, no reboot, no interaction with humans, no updates once they are up and running
  - other constraints:
    * Resources: constrtaints in size, computing power (for example: may be batterie operated), memory capacity
	  * Time: constraints on fastness of reaction to input or duration for certain operations
	  * Environment: high or low temperatures, preassure, humidity, underwater etc
	  * Cost: Minimizing cost is most of the time the primary design consideration, the selected hardewar should be "just good enough" for the specific tasks
	  * Time to market: Design and development cycle has to be short to beat other competitors
  - other challenges:
    * choices in hard- and software: wide variety of chips, programming language selection, selection of I/O components, programming with multi-tasking and multi-threading execution
	  * testing and debugging: Emulator for simulating all components to do debugging on a PC, testing on multi-tasking and scheduling execution, testing in real world environment
  
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
