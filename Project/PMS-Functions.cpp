#include <iostream>
#include <conio.h>
using namespace std;

//  Global data 

int total_Medicines = 1000;
int index = 1;

string nameArray[1000] = {"Panadol"};
string companyArray[1000] = {"GSK"};
string categoryArray[1000] = {"Painkiller"};
int quantityArray[1000] = {50};
float priceArray[1000] = {25.0};
int expMonthArray[1000] = {12};
int expYearArray[1000] = {2026};

//  FUNCTIONS

void showAllMedicines()
{
    system("cls");
    cout << "============ All Medicines ============" << endl;
    cout << "Name\tCompany\tCategory\tQty\tPrice\tExpiry" << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    bool anyFound = false;
    for (int j = 0; j < index; j++)
    {
        if (nameArray[j] != "")
        {
            cout << nameArray[j] << "\t" << companyArray[j] << "\t"
                 << categoryArray[j] << "\t" << quantityArray[j] << "\t"
                 << priceArray[j] << "\t"
                 << expMonthArray[j] << "/" << expYearArray[j] << endl;
            anyFound = true;
        }
    }
    if (!anyFound)
        cout << "No medicines found." << endl;
}

void searchMedicine()
{
    system("cls");
    cout << "Enter medicine name to search : ";
    string name;
    cin >> name;

    bool found = false;
    int foundIndex = -1;
    for (int j = 0; j < index; j++)
    {
        if (nameArray[j] == name)
        {
            foundIndex = j;
            found = true;
        }
    }
    if (!found)
    {
        cout << "Medicine '" << name << "' not found." << endl;
    }
    else
    {
        cout << "===== Medicine Found =====" << endl;
        cout << "Name     : " << nameArray[foundIndex] << endl;
        cout << "Company  : " << companyArray[foundIndex] << endl;
        cout << "Category : " << categoryArray[foundIndex] << endl;
        cout << "Quantity : " << quantityArray[foundIndex] << endl;
        cout << "Price    : Rs. " << priceArray[foundIndex] << endl;
        cout << "Expiry   : " << expMonthArray[foundIndex] << "/" << expYearArray[foundIndex] << endl;
    }
}

void updateMedicine()
{
    system("cls");
    cout << "Enter medicine name to update : ";
    string name;
    cin >> name;

    bool found = false;
    int foundIndex = -1;
    for (int j = 0; j < index; j++)
    {
        if (nameArray[j] == name)
        {
            foundIndex = j;
            found = true;
        }
    }
    if (found)
    {
        cout << "===== Old Record =====" << endl;
        cout << "Name: " << nameArray[foundIndex]
             << " | Company: " << companyArray[foundIndex]
             << " | Category: " << categoryArray[foundIndex] << endl
             << "Quantity: " << quantityArray[foundIndex]
             << " | Price: " << priceArray[foundIndex]
             << " | Expiry: " << expMonthArray[foundIndex] << "/" << expYearArray[foundIndex] << endl;

        cout << "\nEnter new details:" << endl;
        cout << "Medicine Name : ";
        cin >> nameArray[foundIndex];
        cout << "Company       : ";
        cin >> companyArray[foundIndex];
        cout << "Category      : ";
        cin >> categoryArray[foundIndex];
        cout << "Quantity      : ";
        cin >> quantityArray[foundIndex];
        cout << "Price (Rs.)   : ";
        cin >> priceArray[foundIndex];
        cout << "Expiry Month  : ";
        cin >> expMonthArray[foundIndex];
        cout << "Expiry Year   : ";
        cin >> expYearArray[foundIndex];

        cout << "Record updated successfully!" << endl;
    }
    else
    {
        cout << "Medicine not found." << endl;
    }
}

void deleteMedicine()
{
    system("cls");
    cout << "Enter medicine name to delete : ";
    string name;
    cin >> name;

    bool found = false;
    int foundIndex = -1;
    for (int j = 0; j < index; j++)
    {
        if (nameArray[j] == name)
        {
            foundIndex = j;
            found = true;
        }
    }
    if (found)
    {
        nameArray[foundIndex] = "";
        companyArray[foundIndex] = "";
        categoryArray[foundIndex] = "";
        quantityArray[foundIndex] = 0;
        priceArray[foundIndex] = 0;
        expMonthArray[foundIndex] = 0;
        expYearArray[foundIndex] = 0;
        cout << "Record of '" << name << "' deleted successfully." << endl;
    }
    else
    {
        cout << "Medicine not found." << endl;
    }
}

void stockReport()
{
    system("cls");
    cout << "============ Stock Report ============" << endl;
    int totalMedicines = 0;
    int totalQuantity = 0;
    float totalValue = 0;
    for (int j = 0; j < index; j++)
    {
        if (nameArray[j] != "")
        {
            totalMedicines++;
            totalQuantity += quantityArray[j];
            totalValue += quantityArray[j] * priceArray[j];
        }
    }
    cout << "Total Medicine Types : " << totalMedicines << endl;
    cout << "Total Units in Stock : " << totalQuantity << endl;
    cout << "Total Stock Value    : Rs. " << totalValue << endl;
}

void addMedicine()
{
    system("cls");
    cout << "========= Add New Medicine =========" << endl;
    cout << "Enter Medicine Name  : ";
    cin >> nameArray[index];
    cout << "Enter Company        : ";
    cin >> companyArray[index];
    cout << "Enter Category       : ";
    cin >> categoryArray[index];
    cout << "Enter Quantity       : ";
    cin >> quantityArray[index];
    cout << "Enter Price (Rs.)    : ";
    cin >> priceArray[index];
    cout << "Enter Expiry Month   : ";
    cin >> expMonthArray[index];
    cout << "Enter Expiry Year    : ";
    cin >> expYearArray[index];

    index++;
    cout << "\nMedicine record saved successfully!" << endl;
}

void lowStockAlert()
{
    system("cls");
    cout << "============ Low Stock Alert (Qty < 10) ============" << endl;
    bool medLow = false;
    for (int j = 0; j < index; j++)
    {
        if (nameArray[j] != "" && quantityArray[j] < 10)
        {
            cout << "! LOW STOCK => " << nameArray[j]
                 << " | Remaining: " << quantityArray[j] << " units" << endl;
            medLow = true;
        }
    }
    if (!medLow)
        cout << "All medicines have sufficient stock." << endl;
}

void checkExpiredMedicines()
{
    system("cls");
    cout << "============ Expired Medicines ============" << endl;
    cout << "Enter current month (MM)  : ";
    int curMonth;
    cin >> curMonth;
    cout << "Enter current year (YYYY) : ";
    int curYear;
    cin >> curYear;

    bool anyExpired = false;
    for (int j = 0; j < index; j++)
    {
        if (nameArray[j] != "")
        {
            if (expYearArray[j] < curYear || (expYearArray[j] == curYear && expMonthArray[j] <= curMonth))
            {
                cout << "!! EXPIRED => " << nameArray[j]
                     << " | Expiry: " << expMonthArray[j] << "/" << expYearArray[j] << endl;
                anyExpired = true;
            }
        }
    }
    if (!anyExpired)
        cout << "No expired medicines found." << endl;
}

void totalInventoryValue()
{
    system("cls");
    cout << "============ Total Inventory Value ============" << endl;
    float totalValue = 0;
    cout << "Name\tQty\tPrice\tValue" << endl;
    for (int j = 0; j < index; j++)
    {
        if (nameArray[j] != "")
        {
            float val = quantityArray[j] * priceArray[j];
            totalValue += val;
            cout << nameArray[j] << "\t" << quantityArray[j] << "\t"
                 << priceArray[j] << "\t" << val << endl;
        }
    }
    cout << "TOTAL INVENTORY VALUE : Rs. " << totalValue << endl;
}

void generateCustomerBill()
{
    system("cls");
    cout << "============ Customer Bill ============" << endl;
    cout << "Enter customer name : ";
    string customerName;
    cin >> customerName;

    float grandTotal = 0;
    char addMore = 'y';

    while (addMore == 'y' || addMore == 'Y')
    {
        cout << "Enter medicine name : ";
        string medName;
        cin >> medName;

        bool found = false;
        int foundIndex = -1;
        for (int j = 0; j < index; j++)
        {
            if (nameArray[j] == medName)
            {
                foundIndex = j;
                found = true;
            }
        }

        if (!found)
        {
            cout << "Medicine not found in system." << endl;
        }
        else
        {
            cout << "Enter quantity : ";
            int qty;
            cin >> qty;

            if (qty > quantityArray[foundIndex])
            {
                cout << "Insufficient stock! Available: " << quantityArray[foundIndex] << endl;
            }
            else
            {
                float subtotal = qty * priceArray[foundIndex];
                grandTotal += subtotal;
                quantityArray[foundIndex] -= qty;

                cout << "   --- Item Added ---" << endl;
                cout << "Medicine\tQty\tPrice\tSubtotal" << endl;
                cout << medName << "\t\t" << qty << "\t"
                     << priceArray[foundIndex] << "\t" << subtotal << endl;
            }
        }
        cout << "Add more medicine? (y/n) : ";
        cin >> addMore;
    }

    cout << endl;
    cout << "Customer    : " << customerName << endl;
    cout << "Grand Total : Rs. " << grandTotal << endl;
    cout << "Thank you for your purchase!" << endl;
}

bool adminLogin()
{
    for (int i = 0; i < 3; i++)
    {
        system("cls");
        cout << "Admin Login - Attempt " << i + 1 << endl;
        cout << "Enter Username : ";
        string username;
        cin >> username;
        cout << "Enter Password : ";
        string password;
        cin >> password;

        if (username == "CEO" && password == "123")
        {
            cout << "Login Successful" << endl;
            return true;
        }
        else
        {
            cout << "Invalid Username or Password." << endl;
        }
        cout << "Press any key to continue.." << endl;
        getch();
    }
    return false;
}

void adminMenu()
{
    while (true)
    {
        system("cls");
        cout << "============ Admin Menu ============" << endl;
        cout << "1.  Show All Medicines" << endl;
        cout << "2.  Search Medicine by Name" << endl;
        cout << "3.  Update Medicine Record" << endl;
        cout << "4.  Delete Medicine Record" << endl;
        cout << "5.  Generate Stock Report" << endl;
        cout << "6.  Add New Medicine" << endl;
        cout << "7.  Check Low Stock Alerts" << endl;
        cout << "8.  Check Expired Medicines" << endl;
        cout << "9.  Calculate Total Inventory Value" << endl;
        cout << "10. Logout" << endl;
        cout << "====================================" << endl;
        cout << "Choose option : ";
        int adminOption;
        cin >> adminOption;

        if (adminOption == 1)
            showAllMedicines();
        else if (adminOption == 2)
            searchMedicine();
        else if (adminOption == 3)
            updateMedicine();
        else if (adminOption == 4)
            deleteMedicine();
        else if (adminOption == 5)
            stockReport();
        else if (adminOption == 6)
            addMedicine();
        else if (adminOption == 7)
            lowStockAlert();
        else if (adminOption == 8)
            checkExpiredMedicines();
        else if (adminOption == 9)
            totalInventoryValue();
        else if (adminOption == 10)
        {
            cout << "Logging out..." << endl;
            break;
        }
        else
        {
            cout << "Wrong option selected." << endl;
        }

        cout << "\nPress any key to continue..";
        getch();
    }
}

//  MAIN
int main()
{
    while (true)
    {
        system("cls");
        cout << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "-----------Pharmacy Management System--------------" << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Generate Customer Bill (Staff)" << endl;
        cout << "3. Exit" << endl;
        cout << "Choose option : ";
        int userOption;
        cin >> userOption;

        if (userOption == 1)
        {
            if (adminLogin())
            {
                adminMenu();
            }
            cout << "Press any key to continue..";
            getch();
        }
        else if (userOption == 2)
        {
            generateCustomerBill();
            getch();
        }
        else if (userOption == 3)
        {
            break;
        }
        else
        {
            cout << "Wrong option selected." << endl;
            getch();
        }
    }

    cout << endl
         << "Thank you for using the Pharmacy Management System!" << endl;
    return 0;
}
