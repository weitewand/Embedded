## AUTOSAR Introduction
### Part 2 - Current Features in a Nutshell
#### downloaded on 2022_10_03 from https://www.autosar.org/fileadmin/user_upload/AUTOSAR_EXP_Introduction_Part2.pdf

### Short Summary



#### Architechtures and Features

##### AUTOSAR in a Vehicle Network

  - 4: different devices with AUTOSAR or without in the cat communicate via a bus. 
  - 4: There are different layers in the AUTOSAR devices (AUTOSAR classic platform/RTE/application layer or AUTOSAR adaptive platform/application layer)

##### AUTOSAR Fundation

  - 5: The Foundation (TM ;-) ) assures the compability of all standards of AUTOSAR
  - 5: It contains the common artifacts (such as Meta-Model, protocols, main requirements & glossary, debuggint specification (DLT), templates & blueprints)
  - 6: The methodology is derived from the meta model.
  - 6: The methodolgy makes it possible to describe the AUTOSAR architecture and all its interfaces
  - 6: The methodolgy defines the exchange formats with a the other components of the car, makes a seamless integration of application software possible, and allows the automatized configuration of the muC- and muP-software stacks. 
  - 6: The methodology makes it possible to ensure safety and security of the system. (*Is the diagram equvalent to this statement the 'Test'-box in the diagram?*)
  - 6: The methodology gives templates on how to document the standard.
  - *This all seems to be made with more or less shiny marketing presentation stuff in mind than with the idea to help someone learn how AUTOSAR works. A lot of buzzwords and big names for some kind of philosophy or for concepts, but little explanation to make these things more graspable.*

##### AUTOSAR Classic Platform

Layered software architecture:
  - 7: Diagram of different layers (from top to bottom): application layer -> runtime environment -> (complex drivers; ((services layer; ECU abstraction layer) -> muC abstraction layer)) -> muC
  - 7: This supports hardware abstraction, scheduling of runnables and tasks, communication between applications on the same hardware and over the network, diagnosis and diagnostic services, safety- and security-services.
  - 8: The different subsections of the services layer, the ECU abstraction layer, and the muC abstraction layer are shown in a diagram. So the connection between RTE and muC is shown in more detail here.
  - 8: The rest is a copy of the diagram from slide 7 except there is the color of the complex drivers segment changed (*I suspect it is an error*)
  - 8: There is a hierachy in the in the subsections (from top to bottom: services layer -> ECU abstraction layer -> muC abstraction layer). The subsection of the services layer seem alle to provide some kind of service (memory, crypto, communication...), the ones of the ECU abstraction layer do seem to do dom hardeware abstaraction of these services, and the ones of the muC abstraction layer then seem to be the drivers for it. For example: Memory services -> memory HW abstraction -> memory drivers.
  - 9: This seems to be the same as slide 8, just with some minor changes in the colors of the tiles (the colors for eadch tile are still the same, but on the slide 9 only the top strip line of each tile is colored (instead of the full tile)).

##### AUTOSAR Adaptive Platform


  
#### Smart Solutions Based on AUTOSAR



#### Process and Quality 

