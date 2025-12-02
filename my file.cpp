## ques 4 fork questin
'''
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        cout << "Fork failed!" << endl;
    } else {
        cout << "This line runs in BOTH processes!" << endl;
        cout << "PID: " << getpid() << endl;
    }

    return 0;
}
'''

'''
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        cout << "Fork failed!" << endl;
    }
    else if (pid == 0) {
        cout << "Child Process Running" << endl;
        cout << "Child PID: " << getpid() << endl;
    }
    else {
        cout << "Parent Process Running" << endl;
        cout << "Parent PID: " << getpid() << endl;
        cout << "Child PID from parent: " << pid << endl;
    }

    return 0;
}
'''

'''
#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        cout << "Fork failed!" << endl;
    }
    else if (pid == 0) {
        cout << "Child: Running..." << endl;
        sleep(3);
        cout << "Child: Finished!" << endl;
    }
    else {
        cout << "Parent: Waiting for child..." << endl;
        wait(NULL);  // PARENT WAITS HERE
        cout << "Parent: Child completed, now parent is exiting." << endl;
    }

    return 0;
}
'''

## Write a program to report behaviour of Linux kernel including kernel version, CPU type and CPU information.
 '''
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    cout << "===== KERNEL VERSION =====" << endl;
    system("uname -a");

    cout << "\n===== CPU INFORMATION =====" << endl;
    system("lscpu");

    cout << "\n===== DETAILED CPU INFO (/proc/cpuinfo) =====" << endl;
    system("cat /proc/cpuinfo | head -20");

    return 0;
}
'''
## Write a program to report behaviour of Linux kernel including information on configured memory, amount of free and used memory. (Memory Information)
'''
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    cout << "====== MEMORY INFORMATION ======" << endl;

    // Display complete memory information
    system("cat /proc/meminfo | head -15");

    cout << "\n====== HUMAN READABLE MEMORY (free -h) ======" << endl;
    system("free -h");

    cout << "\n====== DETAILED MEMORY (free) ======" << endl;
    system("free");

    return 0;
}
'''
## 
