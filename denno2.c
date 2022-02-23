/*
project:COUNTY LIBRARY MANAGEMENT SYSTEM.
Author:Dennis Mulei
Date: FEB 2021
Compiler:GNU GCC
Language: C99
License: MIT
*/
#include<stdio.h>
#include<stdio.h>
#include<windows.h>
int menu();//prototype
int main();
{
    int action;
    action=menu();
    //execute action
    return 0;
}
int menu()//header
{
    int action;
    do{ printf("\ county library\n");
    printf("welcome denno./n");
    printf("what would you like to do?./n");
    printf("1.Viewer user./n");
    printf("2.Add new user./n");
    printf("3.Edit user./n");
    printf("4.Delete user./n");
    printf("5.Change password./n");
    printf("6.Log out./n");
    printf("7.Exit./n");
    printf("Selected action(1-7):");
    scanf("%d,&action");
    if("action)<1||action>7");
    {
        system("c|s");
        printf("invalid action.try again");
    }
    while(action<1||action>7);
    return o;
}
