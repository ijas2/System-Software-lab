## Program for SCAN Disk Scheduling

[![solution](https://img.shields.io/badge/View-Solution-blue.svg?logo=appveyor&longCache=true&style=for-the-badge)](https://github.com/abhijithvijayan/System-Software-lab/blob/master/cycle-3/p_09/pg_09.c)
[![raw](https://img.shields.io/badge/-raw-green.svg?logo=appveyor&longCache=true&style=for-the-badge )](https://github.com/abhijithvijayan/System-Software-lab/raw/master/cycle-3/p_09/pg_09.c)

The SCAN algorithm is a disk scheduling algorithm that helps in determining the motion of a disk’s arm and head in executing the read and write requests.

In SCAN algorithm the disk arm moves into a particular direction and services the requests coming in its path and after reaching the end of disk, it reverses its direction and again services the request arriving in its path.

So, this algorithm works like an elevator and hence also known as elevator algorithm. As a result, the requests at the midrange are serviced more and those arriving behind the disk arm will have to wait.

Advantages:

- High throughput
- Low variance of response time
- Average response time

Disadvantages:

- Long waiting time for requests for locations just visited by disk arm