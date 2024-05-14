#include "Shapes.h";


int main()
{
    Shapes s;

    ifstream in("Text.txt");
    if (!in.is_open()) {
        cout << "File not found!" << endl;
        return -1;
    }
        
    in >> s;

    in.close();

    s.sortByArea();

    ofstream out("Text1.txt", ios::app);
    if (!out.is_open()) 
    {
        cout << "File not found!" << endl;
        return -1;
    }

    out << "\nContainer:\n" << s << endl;

    Cylinder* c = new Cylinder(22, 3);
    s.add(0, c);
    out << "Container after add:\n" << s << endl;
    s.pop(2);
    out << "Container after pop:\n" << s << endl;

    s.deleteAll();
    out << s << endl;

    out << s[10] << endl;

    out.close();

    return 0;
}
