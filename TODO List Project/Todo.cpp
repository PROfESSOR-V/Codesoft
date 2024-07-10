#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Task {
    public:
        string Des;
        bool completed;
        Task(string desc) : Des(desc), completed(false) {}
};
class TaskManager {
    private:
        vector<Task> tasks;
    public:
        void addTask(const string& td) {
            tasks.push_back(Task(td));
            cout << "Task added: " << td << endl;
        }
        void viewTasks() const {
            if(tasks.empty()){
                cout<<"No tasks here to show."<<endl;
                return;}
            for(size_t i = 0;i < tasks.size();++i){
                cout<<i+1<<". "<<tasks[i].Des<<" ["<<(tasks[i].completed ? "Task Done" : "Pending")<<"]"<<endl;}
        }
        void checkStatus(size_t tI) {
            if(tI<1||tI>tasks.size()){
                cout<<"Invalid Task index."<<endl;
                return;}
            tasks[tI-1].completed=true;
            cout<<"Task marked as completed: "<<tasks[tI-1].Des<<endl;
        }
        void deleteTask(size_t tI) {
            if (tI<1||tI>tasks.size()) {
                cout<<"Invalid Task index."<<endl;
                return; }
            cout<<"Task removed: "<<tasks[tI-1].Des<<endl;
            tasks.erase(tasks.begin() + tI-1);
        }
};
void displayMenu() {
    cout << "\nTo-Do List Manager\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Mark Task as Completed\n";
    cout << "4. Remove Task\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}
int main() {
    TaskManager TM;
    int choice;
    string td;
    size_t tI;
    while (true) {
        displayMenu();
        cin >> choice;
        cin.ignore(); // Ignore the newline character left in the buffer
        switch (choice) {
            case 1:
                cout << "Enter task Description: ";
                getline(cin, td);
                TM.addTask(td);
                break;
            case 2:
                TM.viewTasks();
                break;
            case 3:
                cout << "Enter task number to mark as completed: ";
                cin >> tI;
                TM.checkStatus(tI);
                break;
            case 4:
                cout << "Enter task number to remove: ";
                cin >> tI;
                TM.deleteTask(tI);
                break;
            case 5:
                cout << "Exiting program !!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
