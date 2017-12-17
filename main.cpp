
#include "Provider_Directory.h"



int main()
{
    ifstream file;
    
    file.open("Provider_Directory.txt");
    
    if (!file.is_open())
        cout << "Unable to find/open the input file!";
    else if (file.peek() == -1)
        cout << "ERROR! THE FILE IS EMPTY!\n";
    else
    {
        Provider_Directory list;
        while (!file.eof())
        {
            string name, code, cost;
            getline(file, name);
            getline(file, code);
            getline(file, cost);
            list.insert_service(name, code, cost); //add a service to the list of services (tree)
        }
        list.display_services();
    }
    file.close();
    file.clear();
    return 1;
}

//end
