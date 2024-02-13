#include <iostream>
#include <vector>
#include <string>

class Task {
public:
    Task(const std::string& description) : description(description), completed(false) {}

    void markAsCompleted() {
        completed = true;
    }

    bool isCompleted() const {
        return completed;
    }

    std::string getDescription() const {
        return description;
    }

private:
    std::string description;
    bool completed;
};

class ToDoList {
public:
    void addTask(const std::string& description) {
        tasks.push_back(Task(description));
        std::cout << "Task added: " << description << std::endl;
    }

    void viewTasks() const {
        std::cout << "To-Do List:" << std::endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            std::cout << "[" << (i + 1) << "] ";
            if (tasks[i].isCompleted()) {
                std::cout << "[X] ";
            } else {
                std::cout << "[ ] ";
            }
            std::cout << tasks[i].getDescription() << std::endl;
        }
    }

    void markTaskAsCompleted(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks[index - 1].markAsCompleted();
            std::cout << "Task marked as completed: " << tasks[index - 1].getDescription() << std::endl;
        } else {
            std::cout << "Invalid task number." << std::endl;
        }
    }

private:
    std::vector<Task> tasks;
};

int main() {
    ToDoList todoList;

    while (true) {
        std::cout << "\nMenu:" << std::endl;
        std::cout << "1. Add Task" << std::endl;
        std::cout << "2. View Tasks" << std::endl;
        std::cout << "3. Mark Task as Completed" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::cin.ignore(); // Clear the newline character
            std::cout << "Enter task description: ";
            std::string description;
            std::getline(std::cin, description);
            todoList.addTask(description);
        } else if (choice == 2) {
            todoList.viewTasks();
        } else if (choice == 3) {
            std::cout << "Enter the task number to mark as completed: ";
            size_t index;
            std::cin >> index;
            todoList.markTaskAsCompleted(index);
        } else if (choice == 4) {
            std::cout << "Goodbye!" << std::endl;
            break;
        } else {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
