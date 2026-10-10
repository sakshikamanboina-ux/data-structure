#include <iostream> 
#include <queue>
using namespace std;
int main() { 
queue<int> tokens; 
int choice; 
int nextToken = 1;
do
{  
cout << "\n===== BANK TOKEN SYSTEM =====\n";  
cout << "1. Issue Token\n"; 
cout << "2. Display All Tokens\n";  
cout << "3. Serve Customer\n";   
cout << "4. Exit\n";    
cout << "Enter your choice: "; 
cin >> choice;   
switch (choice)
{       
case 1: tokens.push(nextToken);     
cout << "Token issued: " << nextToken << endl; 
nextToken++;     
break;         
case 2:if (tokens.empty())
{                     
cout << "No tokens waiting.\n";   
}
else {     
queue<int> temp = tokens;    
cout << "Tokens waiting: ";     
while (!temp.empty()) {     
cout << temp.front() << " ";  
temp.pop();  
}        
cout << endl;
}      
break;
case 3:   if (tokens.empty()) 
{                
cout << "No customer to serve.\n";
}
else { 
cout << "Serving customer with Token " 
<< tokens.front() << endl;  
tokens.pop();    
}  
break; 
case 4:               
cout << "Exiting the program. Thank you!\n";   
break;            
default:  
cout << "Invalid choice. Please try again.\n";   
}       
}
while (choice != 4);  
return 0;   
}    
