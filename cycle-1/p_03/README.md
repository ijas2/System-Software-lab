## Program for Priority Scheduling

[![solution](https://img.shields.io/badge/View-Solution-blue.svg?logo=appveyor&longCache=true&style=for-the-badge)](https://github.com/abhijithvijayan/System-Software-lab/blob/master/cycle-1/p_03/pg_03.c)
[![raw](https://img.shields.io/badge/-raw-green.svg?logo=appveyor&longCache=true&style=for-the-badge )](https://github.com/abhijithvijayan/System-Software-lab/raw/master/cycle-1/p_03/pg_03.c)

Priority scheduling is a non-preemptive algorithm and one of the most common scheduling algorithms in batch systems. 
- Each process is assigned a priority. Process with the highest priority is to be executed first and so on.
- Processes with the same priority are executed on first come first served basis. 
- Priority can be decided based on memory requirements, time requirements or any other resource requirement.

Implementation :

1- First input the processes with their burst time 
   and priority.

2- Sort the processes, burst time and priority
   according to the priority.

3- Now simply apply FCFS algorithm. 

Output

![output_img](/out_img/p_03_out.jpg)
