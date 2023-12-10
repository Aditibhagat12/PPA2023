#include<iostream>

 
namespace Marvellous
{
    void Display()
    {
       std:: cout<<"Inside display od marvellous";
    }
}
namespace Infosystems
{
    void Display()
    {
        std::cout<<"Inside display od Infosystems"; 
    }
}

int main()
{
    Marvellous::Display();
    Infosystems::Display();

return 0;
}