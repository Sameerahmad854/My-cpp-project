#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
struct Contact
{
          string name;
          string phone;
};

void listContact()
{
          ifstream file("contact.txt");
          string name, phone;
          int count = 1;
          cout << "\n-----Contact list-----\n";
          while (file >> name >> phone)

          {

                    cout << count << "." << name << "-" << phone << endl;
                    count++;
          }
          if (count == 1)

                    cout << "No contact found!\n";
          file.close();
}

void addContact()
{
          Contact c;
          cout << "enter name:";
          cin >> c.name;
          cout << "enter phone:";
          cin >> c.phone;
          ofstream file("contact.txt", ios::app);
          file << c.name << " " << c.phone << endl;
          file.close();
          cout << "Contact saved successfully!\n";
}
void searchContact()
{
          string searchname;
          cout << "enter name to search:";
          cin >> searchname;
          ifstream file("contact.txt");
          string name, phone;
          bool found = false;
          while (file >> name >> phone)
          {

                    if (name == searchname)
                    {
                              cout << "Contact found:" << name << "-" << phone << endl;
                              found = true;
                              break;
                    }
          }
          if (!found)
                    cout << "Contact not found!\n";
          file.close();
}
void deletecontact()
{
          vector<Contact> contacts;
          Contact c;
          ifstream file("contact.txt");
          while (file >> c.name >> c.phone)
          {
                    contacts.push_back(c);
          }
          file.close();
          if (contacts.empty())
          {
                    cout << "\n No contact delete\n";
                    return;
          }
          listContact();
          int num;
          cout << "enter contact number to delete:";
          cin >> num;
          if (num < 1 || num > contacts.size())
          {
                    cout << "invalid contact number!\n ";
                    return;
          }

          contacts.erase(contacts.begin() + (num - 1));
          ofstream outfile("contact.txt");
          for (Contact ct : contacts)
          {
                    outfile << ct.name << " " << ct.phone << endl;
          }
          outfile.close();
          cout << "Contact deleted successfully\n";
}
int main()
{

          int choice;
          while (true)
          {
                    cout << "====Contact Manager====\n";
                    cout << "\n1.Add contact\n";
                    cout << "\n2.Search contact\n";
                    cout << "\n3.list All contact\n";
                    cout << "\n4.Delete contact\n";
                    cout << "\n5.exit\n";
                    cout << "enter your choice:";
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                              addContact();

                              break;
                    case 2:
                              searchContact();
                              break;
                    case 3:
                              listContact();
                              break;
                    case 4:
                              deletecontact();
                              break;
                    case 5:
                              cout << "Exiting ...\n";
                              return 0;

                    default:
                              cout << "invalid choice!try again\n";
                              break;
                    }
          }

          return 0;
}