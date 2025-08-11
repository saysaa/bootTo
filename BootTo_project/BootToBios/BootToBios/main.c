#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void) {
    SetConsoleTitle("BootTo @ >> BootToBios.exe <<");
    printf("BootTo - BootToBios V1\n");
    printf("Are you sure to Boot To BIOS/UEFI ? 'boot.yes' or 'boot.no'\n");
    printf("Problem? Type: 'help'\n");
    while (1) {
        char confirmation[10];
        printf("BootToBios.exe >> ");
        scanf("%10s", confirmation);
        if (strcmp(confirmation, "boot.yes")== 0) {
            printf("DEBUG: User = yes\n");
            Sleep(1000);
            printf("go to bios...\n");
            system("shutdown /r /fw /t 0");
            break;
        } if (strcmp(confirmation, "boot.no")== 0) {
            printf("DEBUG: User = no\n");
            printf("Cancelled launch...\n");
            Sleep(1000);
        } if (strcmp(confirmation, "help")== 0) {
            printf("No boot ? Try execute BootToBios.exe in admin\n");
            printf("Other problem ? Go to officiel github repo for support\n");
            printf("____________________________________________________________\n");
            Sleep(2000);
        } else {
            printf("Invalid Syntaxe or Error\n");
        }
    }
    return 0;
}