#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int hud() {
    printf(" /$$                             /$$  /$$$$$$$$\n"
       "| $$                            | $$ |__  $$__/       \n"
       "| $$$$$$$   /$$$$$$   /$$$$$$  /$$$$$$  | $$  /$$$$$$ \n"
       "| $$__  $$ /$$__  $$ /$$__  $$|_  $$_/  | $$ /$$__  $$\n"
       "| $$  \\ $$| $$  \\ $$| $$  \\ $$  | $$    | $$| $$  \\ $$\n"
       "| $$  | $$| $$  | $$| $$  | $$  | $$ /$$| $$| $$  | $$\n"
       "| $$$$$$$/|  $$$$$$/|  $$$$$$/  |  $$$$/| $$|  $$$$$$/\n"
       "|_______/  \\______/  \\______/    \\___/  |__/ \\______/ \n");

    printf("________________________________________________________\n");
    printf("bootTo | v1\n");
}
int main() {
    hud();
    while(1) {
        printf("user@console >> ");
        char console[100];
        scanf("%s", console);
        if(strcmp(console, "help")== 0) {
            printf("List of commands:\n");
            printf("clear = Clear console\n");
            printf("bios.boot = Boot to BIOS/UEFI\n");
            printf("dualboot.boot = Boot to Dualboot to UEFI\n");
            printf("os.list = List of OS\n");
            printf("cmd = Enter cmd commands\n");
        }if (strcmp(console, "clear")== 0) {
            system("cls");
            hud();
        } if (strcmp(console, "bios.boot")== 0) {
            system("start BootToBios.exe");
        }
    }
}

