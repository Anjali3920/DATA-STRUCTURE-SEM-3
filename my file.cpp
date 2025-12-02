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
