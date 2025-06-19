// For string stream manipulation
#include "header.h"
#include "textcolor.h"
#include "menustyle.h"
#include "classmain.h"

int main()
{   
    clearScreen();
    loading();
    printAppLogo();
    WorkerManagementSystem wms;
    wms.run();
    return 0;
}
