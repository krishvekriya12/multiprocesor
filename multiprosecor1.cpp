#include <iostream>
#include <string.h>
using namespace std;

class Message {
private:
    string message;

public:
    
    Message(const string& msg = "") : message(msg) {}

    void print() 
	{
        std::cout << "Message: " << message << endl;
    }
    

   
    void print(const std::string& additionalMessage) 
    {
	
        std::cout << "Message: " << message << ", Additional Message: " << additionalMessage <<endl;
    }
};

int main() {
    
    Message msg1("hello guys wellcome to my new blog");

    
    msg1.print(); 
    msg1.print("i hope you are fine");

    Message msg2;
    msg2.print();

    return 0;
}

