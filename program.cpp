#include <iostream>
#define TOMBMERET 10
using namespace std;

int tomb[TOMBMERET];

void elsoFuggveny(){
    for (int index = 0; index < TOMBMERET; ++index) {
        tomb[index]=index;
    }
}

void masodikFuggveny(){
    for (int index = 0; index < TOMBMERET; ++index) {
        cout<<"A tomb ["<<index<<"] eleme = "<<tomb[index]<<endl;
    }
}

void harmadikFuggveny(){
    cout<<"-----||-----"<<endl;
}

int main() {
    masodikFuggveny();
    harmadikFuggveny();

    elsoFuggveny();
    masodikFuggveny();
    
    harmadikFuggveny();
    std::cout << "Lefutottam!" << std::endl;
    
    return 0;
    }
