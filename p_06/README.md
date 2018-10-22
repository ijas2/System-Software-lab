## Program for Two Level Directory Organisation Technique

In the two-level directory system, each user has own user file directory (UFD). 
The system maintains a master block that has one entry for each user. 
This master block contains the addresses of the directory of the users. 
When a user job starts or a user logs in, the system's master file directory (MFD) is searched. 
When a user refers to a particular file, only his own UFD is searched. 
This effectively solves the name collision problem and isolates users from one another.

### [Solution](https://raw.githubusercontent.com/abhijithvijayan/System-Software-lab/master/p_06/pg_06.c)    

Output

![output_img](../out_img/p_06_out.jpg)
