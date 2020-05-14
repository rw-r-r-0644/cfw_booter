#include <sysapp/launch.h>
#include <whb/proc.h>
#include "ios_exploit.h"

void OSForceFullRelaunch(void);

int main() {
    WHBProcInit();

    ExecuteIOSExploit();

    OSForceFullRelaunch();
    SYSLaunchMenu();
    while(WHBProcIsRunning());

    WHBProcShutdown();
    return 0;
}
