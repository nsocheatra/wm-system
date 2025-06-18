#ifndef MENUSTYLE_H
#define MENUSTYLE_H
#include "header.h"

using namespace std;

// functionEnter
void pressEnter()
{
    cout << bold_magenta(">> Press Enter to Coutinue : ");
    cin.ignore();
    cin.get();
}

// printHeader
void printtHeader(const string &title)
{
    string border = "+" + string(title.length() + 4, '=') + "+";
    cout << "\n\033[1;36m" << border << "\n";
    cout << "|  " << title << "  |\n";
    cout << border << "\033[0m\n\n";
}
void printHeaderStyle1(const string &title)
{
    string border = "+" + string(title.length() + 4, '=') + "+";
    cout << "\n\033[1;36m" << border << "\n";
    cout << "|  " << title << "  |\n";
    cout << border << "\033[0m\n\n";
}
void printHeaderStyle2(const string &title)
{
    string border = "*" + string(title.length() + 4, '*') + "*";
    cout << "\n\033[1;32m" << border << "\n";
    cout << "*  " << title << "  *\n";
    cout << border << "\033[0m\n\n";
}
void printHeaderStyle3(const string &title)
{
    string arrows = "<" + string(title.length() + 4, '-') + ">";
    cout << "\n\033[1;35m" << arrows << "\n";
    cout << "|  " << title << "  |\n";
    cout << arrows << "\033[0m\n\n";
}
void printHeaderStyle4(const string &title)
{
    string border = "╔" + string(title.length() + 4, '═') + "╗";
    string bottom = "╚" + string(title.length() + 4, '═') + "╝";
    cout << "\n\033[1;33m" << border << "\n";
    cout << "║  " << title << "  ║\n";
    cout << bottom << "\033[0m\n\n";
}



// >> main Menu
void menuMain()
{
    vector<string> menuMain = {
        "Process Management",
        "Resource Management",
        "Time Management",
        "Client Relationship Management",
        "Business Intelligence",
        "Base System Features (Display/Search Employees)",
        "User Management (Admin Only)",
        "Logout",
        "Exit"};
    Table t;
    t.add_row({"No", "Menu"});
    for (int i = 0; i < menuMain.size(); i++)
    {
        t.add_row({to_string(i + 1), menuMain[i]});
    }
    t[0].format().font_style({FontStyle::bold}).font_align(FontAlign::center);
    t[0].format().font_color(Color::yellow);
    for (int i = 1; i <= menuMain.size(); i++)
    {
        if (i == 9) // Exit option
            t[i][1].format().font_color(Color::red);
        else
            t[i][1].format().font_color(Color::cyan);
    }
    cout << t << endl;
    cout << bold_blue(">> Enter choice: ");
}


void menuMainManage()
{
    vector<string> menuMainManage = {
        "Process Management",
        "Resource Management",
        "Time Management",
        "Client Relationship Management",
        "Business Intelligence",
        "Base System Features (Display/Search Employees)",
        "Logout",
        "Exit"};
    Table t;
    t.add_row({"No", "Menu"});
    for (int i = 0; i < menuMainManage.size(); i++)
    {
        t.add_row({to_string(i + 1), menuMainManage[i]});
    }
    t[0].format().font_style({FontStyle::bold}).font_align(FontAlign::center);
    t[0].format().font_color(Color::yellow);
    for (int i = 1; i <= menuMainManage.size(); i++)
    {
        if (i == 9) // Exit option
            t[i][1].format().font_color(Color::red);
        else
            t[i][1].format().font_color(Color::cyan);
    }
    cout << t << endl;
    cout << bold_blue(">> Enter choice: ");
}


void menuMainAdmin()
{
    vector<string> menuMainAdmin = {
        "Process Management",
        "Resource Management",
        "Time Management",
        "Client Relationship Management",
        "Business Intelligence",
        "Base System Features (Display/Search Employees)",
        "User Management (Admin Only)",
        "Logout",
        "Exit"};
    Table t;
    t.add_row({"No", "Menu"});
    for (int i = 0; i < menuMainAdmin.size(); i++)
    {
        t.add_row({to_string(i + 1), menuMainAdmin[i]});
    }
    t[0].format().font_style({FontStyle::bold}).font_align(FontAlign::center);
    t[0].format().font_color(Color::yellow);
    for (int i = 1; i <= menuMainAdmin.size(); i++)
    {
        if (i == 9) // Exit option
            t[i][1].format().font_color(Color::red);
        else
            t[i][1].format().font_color(Color::cyan);
    }
    cout << t << endl;
    cout << bold_blue(">> Enter choice: ");
}

void menuMainViewer()
{
    vector<string> menuMainViewer = {
        "Process Management",
        "Resource Management",
        "Time Management",
        "Client Relationship Management",
        "Business Intelligence",
        "Base System Features (Display/Search Employees)",
        "Logout",
        "Exit"};
    Table t;
    t.add_row({"No", "Menu"});
    for (int i = 0; i < menuMainViewer.size(); i++)
    {
        t.add_row({to_string(i + 1), menuMainViewer[i]});
    }
    t[0].format().font_style({FontStyle::bold}).font_align(FontAlign::center);
    t[0].format().font_color(Color::yellow);
    for (int i = 1; i <= menuMainViewer.size(); i++)
    {
        if (i == 9) // Exit option
            t[i][1].format().font_color(Color::red);
        else
            t[i][1].format().font_color(Color::cyan);
    }
    cout << t << endl;
    cout << bold_blue(">> Enter choice: ");
}

// Process Management  
void menuPM()
{
    vector<string> menuMainAdmin = {
        "Add New Employee",
        "Update Employee Details",
        "Delete Employee Record",
        "Set Hiring Status",
        "Back to Main Menu"};
    Table t;
    t.add_row({"No", "Menu"});
    for (int i = 0; i < menuMainAdmin.size(); i++)
    {
        t.add_row({to_string(i + 1), menuMainAdmin[i]});
    }
    t[0].format().font_style({FontStyle::bold}).font_align(FontAlign::center);
    t[0].format().font_color(Color::yellow);
    for (int i = 1; i <= menuMainAdmin.size(); i++)
    {
        if (i == 5) // Exit option
            t[i][1].format().font_color(Color::red);
        else
            t[i][1].format().font_color(Color::cyan);
    }
    cout << t << endl;
    cout << bold_blue(">> Enter choice: ");
}



// Resource Management
void menuRM()
{
    vector<string> menuMain = {
        "Assign Employee to Department",
        "View Resource Allocation per Department",
        "Reassign Employees between Departments",
        "View Position/Role Distribution",
        "Back to Main Menu"};
    Table t;
    t.add_row({"No", "Menu"});
    for (int i = 0; i < menuMain.size(); i++)
    {
        t.add_row({to_string(i + 1), menuMain[i]});
    }
    t[0].format().font_style({FontStyle::bold}).font_align(FontAlign::center);
    t[0].format().font_color(Color::yellow);
    for (int i = 1; i <= menuMain.size(); i++)
    {
        if (i == 5) // Exit option
            t[i][1].format().font_color(Color::red);
        else
            t[i][1].format().font_color(Color::cyan);
    }
    cout << t << endl;
    cout << bold_blue(">> Enter choice: ");
}


// Time Management  
void menuTM()
{
    vector<string> menuMain = {
        "Record Employee Attendance",
        "Track Work Hours or Shifts",
        "Manage Leave Balances",
        "Display Employee Time Report",
        "Display All Employee Details"
        "Back to Main Menu"};
    Table t;
    t.add_row({"No", "Menu"});
    for (int i = 0; i < menuMain.size(); i++)
    {
        t.add_row({to_string(i + 1), menuMain[i]});
    }
    t[0].format().font_style({FontStyle::bold}).font_align(FontAlign::center);
    t[0].format().font_color(Color::yellow);
    for (int i = 1; i <= menuMain.size(); i++)
    {
        if (i == 4) // Exit option
            t[i][1].format().font_color(Color::red);
        else
            t[i][1].format().font_color(Color::cyan);
    }
    cout << t << endl;
    cout << bold_blue(">> Enter choice: ");
}



//  Client Relationship Management
void menuCRM()
{
    vector<string> menuMain = {
        "Add Client Record",
        "Assign Employees to Clients",
        "View All Clients",
        "Project Management",
        "Back to Main Menu"};
    Table t;
    t.add_row({"No", "Menu"});
    for (int i = 0; i < menuMain.size(); i++)
    {
        t.add_row({to_string(i + 1), menuMain[i]});
    }
    t[0].format().font_style({FontStyle::bold}).font_align(FontAlign::center);
    t[0].format().font_color(Color::yellow);
    for (int i = 1; i <= menuMain.size(); i++)
    {
        if (i == 5) // Exit option
            t[i][1].format().font_color(Color::red);
        else
            t[i][1].format().font_color(Color::cyan);
    }
    cout << t << endl;
    cout << bold_blue(">> Enter choice: ");
}



// Project Management 
void menuPMM()
{
    vector<string> menuMain = {
        "Create Project",
        "Assign Employees to Projects",
        "Track Project Deadlines",
        "View Employees Assigned to Projects",
        "Delete Project",
        "Track Client-Specific Projects or Contacts",
        "Back to Main Menu"};
    Table t;
    t.add_row({"No", "Menu"});
    for (int i = 0; i < menuMain.size(); i++)
    {
        t.add_row({to_string(i + 1), menuMain[i]});
    }
    t[0].format().font_style({FontStyle::bold}).font_align(FontAlign::center);
    t[0].format().font_color(Color::yellow);
    for (int i = 1; i <= menuMain.size(); i++)
    {
        if (i == 7) // Exit option
            t[i][1].format().font_color(Color::red);
        else
            t[i][1].format().font_color(Color::cyan);
    }
    cout << t << endl;
    cout << bold_blue(">> Enter choice: ");
}


// businessIntelligence
void menuBI()
{
    vector<string> menuMain = {
        "Count Total Employees",
        "Department-wise Employee Statistics",
        "Average, Max, and Min Salaries",
        "Sort Employees",
        "Back to Main Menu"};
    Table t;
    t.add_row({"No", "Menu"});
    for (int i = 0; i < menuMain.size(); i++)
    {
        t.add_row({to_string(i + 1), menuMain[i]});
    }
    t[0].format().font_style({FontStyle::bold}).font_align(FontAlign::center);
    t[0].format().font_color(Color::yellow);
    for (int i = 1; i <= menuMain.size(); i++)
    {
        if (i == 5) // Exit option
            t[i][1].format().font_color(Color::red);
        else
            t[i][1].format().font_color(Color::cyan);
    }
    cout << t << endl;
    cout << bold_blue(">> Enter choice: ");
} 



// Base System Features
void menuBF()
{
    vector<string> menuMain = {
        "Display All Employees",
        "Display One Employee by ID",
        "Search Employees",
        "Back to Main Menu"};
    Table t;
    t.add_row({"No", "Menu"});
    for (int i = 0; i < menuMain.size(); i++)
    {
        t.add_row({to_string(i + 1), menuMain[i]});
    }
    t[0].format().font_style({FontStyle::bold}).font_align(FontAlign::center);
    t[0].format().font_color(Color::yellow);
    for (int i = 1; i <= menuMain.size(); i++)
    {
        if (i == 4) // Exit option
            t[i][1].format().font_color(Color::red);
        else
            t[i][1].format().font_color(Color::cyan);
    }
    cout << t << endl;
    cout << bold_blue(">> Enter choice: ");
} 



//  User Management
void menuUM()
{
    vector<string> menuMainAdmin = {
        "Add New User",
        "Delete User",
        "Manage User Role",
        "View All Users",
        "Back to main menu"
    };
    Table t;
    t.add_row({"No", "Menu"});
    for (int i = 0; i < menuMainAdmin.size(); i++)
    {
        t.add_row({to_string(i + 1), menuMainAdmin[i]});
    }
    t[0].format().font_style({FontStyle::bold}).font_align(FontAlign::center);
    t[0].format().font_color(Color::yellow);
    for (int i = 1; i <= menuMainAdmin.size(); i++)
    {
        if (i == 5) // Exit option
            t[i][1].format().font_color(Color::red);
        else
            t[i][1].format().font_color(Color::cyan);
    }
    cout << t << endl;
    cout << bold_blue(">> Enter choice: ");
} 
// menu login
void menuLogin()
{
    vector<string> menuMain = {"Sign Up", "Sign In", "Exit"};
    Table t;
    t.add_row({"No", "Menu"});
    for (int i = 0; i < menuMain.size(); i++)
    {
        t.add_row({to_string(i + 1), menuMain[i]});
    }
    t[0].format().font_style({FontStyle::bold}).font_align(FontAlign::center);
    t[0].format().font_color(Color::yellow);

    t[1][1].format().font_color(Color::cyan);
    t[2][1].format().font_color(Color::green);
    t[3][1].format().font_color(Color::red);

    cout << t << endl;
    cout << bold_blue(">> Enter choice: ");
}
void printAppLogo()
{
   cout<< bold_blue(R"(
__        __         _                                        
\ \      / /__  _ __| | _____ _ __                            
 \ \ /\ / / _ \| '__| |/ / _ \ '__|                           
  \ V  V / (_) | |  |   <  __/ |                              
 __\_/\_/ \___/|_|  |_|\_\___|_|                          _   
|  \/  | __ _ _ __   __ _  __ _  ___ _ __ ___   ___ _ __ | |_ 
| |\/| |/ _` | '_ \ / _` |/ _` |/ _ \ '_ ` _ \ / _ \ '_ \| __|
| |  | | (_| | | | | (_| | (_| |  __/ | | | | |  __/ | | | |_ 
|_|  |_|\__,_|_| |_|\__,_|\__, |\___|_| |_| |_|\___|_| |_|\__|
                          |___/                                                                                   
 )");cout<< bold_green(R"(
    --|Menu Feature|--)")<<endl;
                       
}

void Process_Management()
{
   cout<< bold_blue(R"(
 ____                                                            
|  _ \ _ __ ___   ___ ___  ___ ___                               
| |_) | '__/ _ \ / __/ _ \/ __/ __|                              
|  __/| | | (_) | (_|  __/\__ \__ \                              
|_|  _|_|  \___/ \___\___||___/___/                       _      
|  \/  | __ _ _ __   __ _  __ _  ___ _ __ ___   ___ _ __ | |_    
| |\/| |/ _` | '_ \ / _` |/ _` |/ _ \ '_ ` _ \ / _ \ '_ \| __|   
| |  | | (_| | | | | (_| | (_| |  __/ | | | | |  __/ | | | |_    
|_|  |_|\__,_|_| |_|\__,_|\__, |\___|_| |_| |_|\___|_| |_|\__|   
                          |___/                                  
                          )")<<endl;
}
void Resource_Management()
{
   cout<< bold_blue(R"(
 ____                                                         
|  _ \ ___  ___  ___  _   _ _ __ ___ ___                      
| |_) / _ \/ __|/ _ \| | | | '__/ __/ _ \                     
|  _ <  __/\__ \ (_) | |_| | | | (_|  __/                     
|_| \_\___||___/\___/ \__,_|_|  \___\___|                 _   
|  \/  | __ _ _ __   __ _  __ _  ___ _ __ ___   ___ _ __ | |_ 
| |\/| |/ _` | '_ \ / _` |/ _` |/ _ \ '_ ` _ \ / _ \ '_ \| __|
| |  | | (_| | | | | (_| | (_| |  __/ | | | | |  __/ | | | |_ 
|_|  |_|\__,_|_| |_|\__,_|\__, |\___|_| |_| |_|\___|_| |_|\__|
                          |___/                                    
                          )")<<endl;
}
void Time_Management()
{
   cout<< bold_blue(R"(
 _____ _                                                      
|_   _(_)_ __ ___   ___                                       
  | | | | '_ ` _ \ / _ \                                      
  | | | | | | | | |  __/                                      
 _|_|_|_|_| |_| |_|\___|                                  _   
|  \/  | __ _ _ __   __ _  __ _  ___ _ __ ___   ___ _ __ | |_ 
| |\/| |/ _` | '_ \ / _` |/ _` |/ _ \ '_ ` _ \ / _ \ '_ \| __|
| |  | | (_| | | | | (_| | (_| |  __/ | | | | |  __/ | | | |_ 
|_|  |_|\__,_|_| |_|\__,_|\__, |\___|_| |_| |_|\___|_| |_|\__|
                          |___/                                      
                          )")<<endl;
}

void Client_Relationship_Management ()
{
   cout<< bold_blue(R"(
  ____ _ _            _                                        
 / ___| (_) ___ _ __ | |_                                      
| |   | | |/ _ \ '_ \| __|                                     
| |___| | |  __/ | | | |_                                      
 \____|_|_|\___|_| |_|\__|               _     _               
|  _ \ ___| | __ _| |_(_) ___  _ __  ___| |__ (_)_ __          
| |_) / _ \ |/ _` | __| |/ _ \| '_ \/ __| '_ \| | '_ \         
|  _ <  __/ | (_| | |_| | (_) | | | \__ \ | | | | |_) |        
|_| \_\___|_|\__,_|\__|_|\___/|_| |_|___/_| |_|_| .__/    _    
|  \/  | __ _ _ __   __ _  __ _  ___ _ __ ___   |_| _ __ | |_  
| |\/| |/ _` | '_ \ / _` |/ _` |/ _ \ '_ ` _ \ / _ \ '_ \| __| 
| |  | | (_| | | | | (_| | (_| |  __/ | | | | |  __/ | | | |_  
|_|  |_|\__,_|_| |_|\__,_|\__, |\___|_| |_| |_|\___|_| |_|\__|                                     
                          )")<<endl;
}

void Base_System_Features()
{
   cout<< bold_blue(R"(
 ____                   ____            _                 
| __ )  __ _ ___  ___  / ___| _   _ ___| |_ ___ _ __ ___  
|  _ \ / _` / __|/ _ \ \___ \| | | / __| __/ _ \ '_ ` _ \ 
| |_) | (_| \__ \  __/  ___) | |_| \__ \ ||  __/ | | | | |
|____/ \__,_|___/\___| |____/ \__, |___/\__\___|_| |_| |_|
|  ___|__  __ _| |_ _   _ _ __|___/ ___                   
| |_ / _ \/ _` | __| | | | '__/ _ \/ __|                  
|  _|  __/ (_| | |_| |_| | | |  __/\__ \                  
|_|  \___|\__,_|\__|\__,_|_|  \___||___/                                      
                          )")<<endl;
}

void User_Management()
{
   cout<< bold_blue(R"(
 _   _                                                        
| | | |___  ___ _ __                                          
| | | / __|/ _ \ '__|                                         
| |_| \__ \  __/ |                                            
 \___/|___/\___|_|                                        _   
|  \/  | __ _ _ __   __ _  __ _  ___ _ __ ___   ___ _ __ | |_ 
| |\/| |/ _` | '_ \ / _` |/ _` |/ _ \ '_ ` _ \ / _ \ '_ \| __|
| |  | | (_| | | | | (_| | (_| |  __/ | | | | |  __/ | | | |_ 
|_|  |_|\__,_|_| |_|\__,_|\__, |\___|_| |_| |_|\___|_| |_|\__|
                          |___/                                    
                          )")<<endl;
}

void Business_Intelligence()
{
   cout<< bold_blue(R"(
   ____            _                                
  | __ ) _   _ ___(_)_ __   ___  ___ ___            
  |  _ \| | | / __| | '_ \ / _ \/ __/ __|           
  | |_) | |_| \__ \ | | | |  __/\__ \__ \           
 _|____/ \__,_|___/_|_|_|_|\___||___/___/
 ___       _       _   _           
|_ _|_ __ | |_ ___| | (_) __ _  ___ _ __   ___ ___  
 | || '_ \| __/ _ \ | | |/ _` |/ _ \ '_ \ / __/ _ \ 
 | || | | | ||  __/ | | | (_| |  __/ | | | (_|  __/ 
|___|_| |_|\__\___|_|_|_|\__, |\___|_| |_|\___\___| 
                         |___/                                           
                          )")<<endl;
}

#endif