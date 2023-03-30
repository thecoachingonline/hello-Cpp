#include <iostream>

// using namespace std;

int main() {
    std::cout << "Hello, world!" << std::endl;
    return (0);
}

// Classes
#include <iostream>
#include <string>

using namespace std;

enum cow_purpose { dairy, meat, hide, pet };

class cow{
private:
    string name;
    int age;
    unsigned char purpose;
};

int main(){
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = dairy;
    return(0);
};