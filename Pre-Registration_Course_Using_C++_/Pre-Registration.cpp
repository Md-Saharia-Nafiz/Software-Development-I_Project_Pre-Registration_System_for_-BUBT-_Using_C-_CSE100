#include <iostream>
#include <string>
using namespace std;

// Class to handle Student pre-registration
class Student
{
private:
    // Private member variables to store student details
    string name;
    string intake;
    string section;
    string id;
    string department;
    string presentSemesterNo;
    string presentSemesterCGPA;

public:
    // Function to input student details
    void inputDetails()
    {
        cout << "Name: ";
        getline(cin, name); // Take full line input
        cout << "Intake: ";
        getline(cin, intake);
        cout << "Section: ";
        getline(cin, section);
        cout << "ID No.: ";
        getline(cin, id);
        cout << "Department: ";
        getline(cin, department);
        cout << "Present Semester No.: ";
        getline(cin, presentSemesterNo);
        cout << "Present Semester CGPA: ";
        getline(cin, presentSemesterCGPA);
    }

    // Function to display registration completion message
    void displayConfirmation()
    {
        cout << "\nCongratulations! Your registration has been completed successfully.\n\n";
        cout << "You will be able to see the list of courses and class routine for your next semester\n";
        cout << "at BUBT ANNEX with your partner after 24 hours.\n";
    }
};

// Main function to run the Pre-Registration program
int main()
{
    Student student; // Create Student object

    // Display Welcome Message
    cout << "Welcome to Bangladesh University of Business and Technology (BUBT)\n";
    cout << "Press Enter to continue...";
    cin.ignore(); // Wait for Enter key

    // Display Pre-Registration info
    cout << "\nPre-Registration Course 2026 (Tri Semester)!\n";
    cout << "Date Line 03/11/2025 - 20/11/2025!\n\n";
    cout << "If you want to register, then press Enter...";
    cin.ignore(); // Wait for Enter key

    // Take student details
    student.inputDetails();

    // After details input, ask user to proceed
    cout << "\nIf you want to Next, then press Enter...";
    cin.ignore(); // Wait for Enter key

    // Display confirmation message
    student.displayConfirmation();

    // Ask user to quit the program
    char q;
    cout << "\nPress Q/q to exit the program: ";
    cin >> q;

    if (q == 'Q' || q == 'q')
    {
        cout << "\nThank you for using BUBT Pre-Registration System!\n";
        return 0; // End program
    }

    return 0;
}

