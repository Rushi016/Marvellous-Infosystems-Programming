#   2. Design the automation script which accept process name and display
#      information of the that process if it is running.

import psutil
from sys import argv

def DisplayRunningProcess(process_name):
    flag = False
    try:
        for process in psutil.process_iter(['pid', 'name', 'username']):
            if process.info['name'].lower() == (process_name+'.exe').lower():
                flag = True
                break
            
        if flag == True:
            if process.status() == 'running':
                pid = process.info['pid']
                name = process.info['name']
                username = process.info['username']
                cpu_usage = process.cpu_percent(interval=1.0)
                memory_info = process.memory_info()
                status = process.status()

                print(f"PID : {pid}")
                print(f"Name : {name}")
                print(f"Username : {username}")
                print(f"CPU Usage : {cpu_usage}")
                print(f"Memory Info : {memory_info}")
                print(f"Status : {status}")
                flag = False

            else:
                print(f"{process_name} is not running")
                exit()
        else:
            if flag == False:
                print(f"{process_name} is Invalid Process Name")
                exit()

    except (psutil.NoSuchProcess, psutil.AccessDenied, psutil.ZombieProcess) as eobj:
        print(eobj)
    
def main():
    if len(argv) != 2:
        print("Usage: Application_Name.py   Process_Name")
        exit()
    
    process_name = argv[1]
    print(f"Information about {process_name}")
    DisplayRunningProcess(process_name)


if __name__ == "__main__":
    main()

"""

Output:
D:\Marvellous Infosystems\Python Data Science Machine Learning with Automation\Automation\Automation Assignments\Automation Assignment 12>Python Assignment12_2.py Notepad 
Information about Notepad
PID : 7272
Name : Notepad.exe
Username : LAPTOP-LK1V5OH1\ASUS
CPU Usage : 0.0
Memory Info : pmem(rss=115564544, vms=218796032, num_page_faults=77626, peak_wset=289705984, wset=115564544, peak_paged_pool=2276896, paged_pool=2179544, peak_nonpaged_pool=60136, nonpaged_pool=57280, pagefile=218796032, peak_pagefile=255909888, private=218796032)
Status : running

"""