#include "program.h"
#include <iostream>
using namespace std;

Program::Program() {}

void Program::displayMenu()
{
  std::cout << "Following is the menu: " << std::endl;
  std::cout << "1. Create a new Account " << std::endl;
  std::cout << "2. Make Transaction " << std::endl;
  std::cout << "3. Transaction history " << std::endl;
  std::cout << "4. Exit " << std::endl;
}
int Program::getUserInput()
{
  int input = 0;
  std::cout << "Enter your input" << std::endl;
  std::cin >> input;
  return input;
}
void Program::CreateAccount()
{
    
    std::string title;
    signed int deposit = 0;
    std::cout << "Enter your name : " << std::endl;
    std::cin>>title;
    std::cout << "Enter your the initial deposit you want to make :" << std::endl;
    std::cin >> deposit;
    Account *account = new Account(title, deposit);
    std::cout << "Your Account has been created successfully." << std::endl;
    std::cout << "your account ID is : " << account->getID()<< std::endl;
    std::cout << "your account title is : " <<account->getTitle() << std::endl;
    std::cout << "your account Balance is : " <<account->getBalance() << std::endl;

}
void Program::MakeTransaction()
{
  std::cout << "Transaction has been made! " << std::endl;
}
void Program::DeleteAccount()
{
  std::cout << "Account has been deleted! " << std::endl;
}
void Program::TransactionHistory()
{
  std::cout << "Transaction history is shown" << std::endl;
}
void Program::Exit()
{
  std::cout << "Program exited" << std::endl;
}
void Program::run()
{
  while (true)
  {
    Program::displayMenu();
    int userInput = Program::getUserInput();
    if (userInput != 4)
    {
      ProcessUserInput(userInput);
    }else{
      break;
    }
  }
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