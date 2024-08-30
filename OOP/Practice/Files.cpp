#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class User {
private:
    std::string username;
    std::string password;

public:
    User(const std::string& username, const std::string& password)
        : username(username), password(password) {}

    const std::string& getUsername() const {
        return username;
    }

    bool validatePassword(const std::string& inputPassword) const {
        return password == inputPassword;
    }

    void saveToFile(std::ofstream& outFile) const {
        outFile << username << ',' << password << '\n';
    }
};

class RegistrationSystem {
private:
    std::vector<User> users;

public:
    bool registerUser(const std::string& username, const std::string& password) {
        for (const User& user : users) {
            if (user.getUsername() == username) {
                std::cout << "Username already exists. Registration failed.\n";
                return false;
            }
        }

        users.emplace_back(username, password);
        std::cout << "User " << username << " registered.\n";
        return true;
    }

    bool loginUser(const std::string& username, const std::string& password) {
        for (const User& user : users) {
            if (user.getUsername() == username && user.validatePassword(password)) {
                std::cout << "Welcome, " << username << "!\n";
                return true;
            }
        }

        std::cout << "Login failed. Invalid username or password.\n";
        return false;
    }

    void saveToFile(const std::string& filename) const {
        std::ofstream outFile(filename);
        if (!outFile) {
            std::cerr << "Failed to open " << filename << " for writing.\n";
            return;
        }

        for (const User& user : users) {
            user.saveToFile(outFile);
        }

        std::cout << "Data saved to " << filename << '\n';
    }
};

int main() {
    RegistrationSystem regSystem;

    while (true) {
        std::cout << "1. Register\n2. Login\n3. Exit\nEnter choice: ";
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::string username, password;
            std::cout << "Enter username: ";
            std::cin >> username;
            std::cout << "Enter password: ";
            std::cin >> password;
            regSystem.registerUser(username, password);
        } else if (choice == 2) {
            std::string username, password;
            std::cout << "Enter username: ";
            std::cin >> username;
            std::cout << "Enter password: ";
            std::cin >> password;
            regSystem.loginUser(username, password);
        } else if (choice == 3) {
            regSystem.saveToFile("users.txt");
            break;
        } else {
            std::cout << "Invalid choice. Please enter a valid choice.\n";
        }
    }

    return 0;
}