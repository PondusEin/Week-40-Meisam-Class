#include <iostream>
#include <conio.h>
#include <vector>
/*/
std::vector <char> board={};
class User {
private:
    bool L, R, D, U, A;
public:
    User() {
        L = 0;
        R = 1;
        D = 0;
        U = 0;
        A = 0;
    }
    void gamelogic();
    void Movinguser();
};

void printboard() {
    system("cls");
    constexpr char numrows{ 10 };
    constexpr char numcols{ 10 };

    char product[numrows][numcols]{};
    for (int row{ 1 }; row < numrows; ++row){
        for (int col{ 1 }; col < numcols;++col)
            std::cout << product[row][col] << '\t';
        std::cout << '\n';
    }
}


/*void Movinguser() {
    
    char x;
    x = _getch();
    std::cin >> x;
    switch (x)
    {
    case 'd':
    {
        if (L == 0) {
            L = 0, U = 0, D = 0,
                R = 1;
        }
    
        break;
    }
    case 'w':
    {
        if (D == 0) {
            L = 0, D = 0, R = 0,
                U = 1;
        }
    
        break;
    }
    case 'a': {
        if (R == 0) {
            U = 0, D = 0, R = 0,
                L = 1;
        }
    
        break;
    }
    case 's':{
        if (U == 0) {
            U = 0, L = 0, R = 0,
                D = 1;
        }
        break;
    }
    default:
        break;
    }
}

void User::gamelogic()
{
    char x;
        Movinguser();
        if (R == 1) {
            x++;
        }
        else if (L == 1) {
            x--;
        }
        else if (U == 1) {
            x -= 50;
        }
        else {
            x += 50;
        }
}
*/
/*
struct father {
    long money;
    std::string car;
};

struct child : public father{
    std::string name;

};
/*struct Employee {
    short id;
    int age;
    double wage;
};

void printinformation(Employee employee) {
    std::cout << "ID: " << employee.id << '\n';
    std::cout << "Age: " << employee.age << '\n';
    std::cout << "Wage: " << employee.wage << '\n';
}
*/
struct advertisement {
    double seen{ 0 };
    double seenmoney{ 0 };
    double clickedmoney{ 0 };
    double clicked{ 0 };
    double earned{ 0 };

    void numbers(advertisement adverts) {
        std::cout << "How many has seen your ads?" << std::endl;
        std::cin >> adverts.seen;
        std::cout << "How much do you earn by showing ads to user?" << std::endl;
        std::cin >> adverts.seenmoney;
        std::cout << "How many has clicked on your ads?" << std::endl;
        std::cin >> adverts.clicked;
        std::cout << "How much do you earn by users clicking on ads?" << std::endl;
        std::cin >> adverts.clickedmoney;

       
    }
    void output(advertisement adverts) {
        std::cout << "Ads been seen: " << adverts.seen << std::endl;
        std::cout << "Ads been clicked: " << adverts.clicked << std::endl;
        adverts.earned = adverts.seen * adverts.seenmoney * adverts.clickedmoney * adverts.clicked;
        std::cout << "Total money earned: " << adverts.earned << std::endl;
    }
};

//
//struct funInStruct {
//    std::string name;
//    std::vector<int> courses;
//    int sizeofvector() {
//        return courses.size();
//    }
//};
//struct a {
//    int number_1;
//};
//struct b {
//    int number_2;
//};
//struct c {
//    a obj_a;
//    b obj_b;
//    int check;
//};

int main()
{

    int a{ 10 };
    int b{ 20 };

    int* ptra(&a);
    int* ptrb(&b);

    std::cout << "The value of a and b is: " << *ptra << " " << *ptrb << std::endl;
    
    a = *&b;
    b = *&a;
    std::cout << "The value of a and b is: " << *ptra << " " << *ptrb << std::endl;
   // advertisement today;

   // today.numbers(today);
   // today.output(today);
  //  c objc;
  //  objc.obj_a.
  //  //father Godfather;
  //  //child son;

  //  //Godfather.money;
  //  //son.car;
    /*
    int Myval = 100;
    int* myValPtr = &Myval;
    std::cout << "My deferenced Val is: " << myValPtr << " " << *myValPtr << std::endl;
    *myValPtr = 200;
    std::cout << "My deferenced Val is: " << myValPtr << " " << *myValPtr << std::endl;
    */
    
  /*  Employee joe{ 14,32,24.15 };
    Employee frank{ 15,28,18.27 };

    printinformation(joe);

    std::cout << '\n';

    printinformation(frank);
    */
//  printboard();
//  Movinguser();
//
    return 0;
}
