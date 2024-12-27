#ifndef RESTO_MGMT_SYS_H // RESTO_MGMT_SYS_H_H (Header guard).
#define RESTO_MGMT_SYS_H // Defining header file

// including necessary Header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h> 

// Defining constants variables
#define MAX_ITEMS 30  
#define NAME_LENGTH 50 
#define ROLE 30
#define SAMPLE 1

// Defining file names
#define INVENTORYFILE "inventory.txt"
#define STAFFFILE "staff.txt"
#define MENUFILE "menu.txt"
#define ORDERFILE "orders.txt"

// Define color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define PINK    "\033[35m"
#define BLUE    "\033[36m"

// Structure to hold inventory items
struct InventoryItem {
    int id;
    char name[NAME_LENGTH];
    int quantity;
    float price;
};

// Structure to hold staff details
struct StaffMember {
    int id;
    char name[NAME_LENGTH];
    char role[ROLE];
    int hoursWorked;
    float salary;
};

// Structure to hold menu items
struct  MenuItem {
    int id;
    char name[NAME_LENGTH];
    float price;
    char category[30];
};

// Structure to hold order card
struct Order {
    int orderId;
    int tableNumber;
    struct MenuItem orderedItems[MAX_ITEMS];
    float totalAmount;
};

// Structure to hold financial details
struct FinancialReport{
    float totalSales;
    float totalExpenses;
    float netProfit;
};

// Function declarations
int start();
int login();

#endif // RESTO_MGMT_SYS_H End of ifndef block