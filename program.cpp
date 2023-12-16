#include "program.h"
#include <iostream>
using namespace std;

void Program::displayMenu()
{
  std::cout << "Following is the menu: " << std::endl;
  std::cout << "1. Create a new Account " << std::endl;
  std::cout << "2. Make Transaction " << std::endl;
  std::cout << "3. Transaction history " << std::endl;
  std::cout << "4. Exit " << std::endl;
}
int Program::getUserInput(){
    int input = 0;
    std::cout <<"Enter your input" << std::endl;
    std::cin >> input;
    return input;
}
void Program::run()
{
  // Program logic goes here
  Program::displayMenu();
  int userInput = Program::getUserInput();
  ProcessUserInput(userInput);
  // Based on user input, perform operations using the classes
  // ...

  // For simplicity, we'll just print a message here
  cout << "Program completed successfully." << endl;
}
void Program::ProcessUserInput(int userInput)
{
  if (userInput == 0)

  {
    std::cout << "Invalid choice. Choose 1-4" << std::endl;
  }
  if (userInput == 1)

  {
    Program::CreateAccount();
  }
  if (userInput == 2)

  {
    Program::MakeTransaction();
  }
  if (userInput == 3)

  {
    Program::TransactionHistory();
  }
  if (userInput == 4)

  {
    Program::Exit();
  }
}