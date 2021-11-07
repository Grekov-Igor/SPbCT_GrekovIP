#include <iostream>
#include <string>
#include <locale.h>
#include <fstream>
#include <Windows.h>

using namespace std;

class Library {
public:
    string name;
    string author;
    int count; //количество экземпляров
    int countOnHand; //количество экземпляров на руках
    
};

bool isEmpty(std::fstream& pFile) //функция проверки на пустоту
{
    return pFile.peek() == std::ifstream::traits_type::eof();
}

int main()
{
    setlocale(LC_ALL, "rus");
    
    string name = "Название: ";
    string author = "Автор: ";
    string count = "Количество: ";
    string countOnHand = "Количество на руках: ";

    string FileText;
    Library book;
    int countBook=0;
    do {
        int check;
        cout << "Выберите действие: ";
        cout << endl << "1. Показать каталог из файла"<<endl;
        cout << "2. Добавить книгу в каталог" << endl;
        cout << "3. Удалить книгу из каталога" << endl;
        cout << "4. Поиск книги по названию"<<endl;
        cout << "5. Чтобы выйти." << endl;
        cout << "Выбор: "; cin >> check;
        if (check == 5) {
            break;
        }
        string path = "Catalog.txt";
        fstream file;
        
        if (check == 1) {
            file.open(path, fstream::in | fstream::out | fstream::app);

            if (!file.is_open())
            {
                cout << "Ошибка при открытии файла!" << endl;
            }
            else
            {
                if (isEmpty(file)) {
                    cout << "Каталог пустой"<<endl;
                }
                else {
                    string s; //строчка из файла
                    while (getline(file, s)) { // пока не достигнут конец файла класть очередную строку в переменную (s)

                        cout << s << endl;

                    }
                }
            }
            file.close();
        }
        else if (check == 2) {
            cout << endl << "Введите количество книг: ";
            int k;
            cin >> k;
            for (int i = 0; i < k; i++) {
                getline(cin, book.name);
                cout << "Введите информацию о книге: " << endl;
                cout << "Название: ";
                getline(cin, book.name);
                

                cout << "Автор: ";
                getline(cin, book.author);

                cout << "Количество: ";
                cin >> book.count;

                cout << "Количество на руках: ";
                cin >> book.countOnHand;
                cout << endl;

                file.open(path, std::ios::app);
                file << name + book.name<<endl;
                file << author + book.author << endl;
                file << count << book.count << endl;
                file << countOnHand << book.countOnHand << endl;
                file << endl;
                file.close();
            }
        }
        else if (check == 3) {
            cout << "Введите, какую по счету книгу хотите удалить: ";
            int l; 
            cin >> l;
            l = (l - 1) * 5 + 1; //номер строки, с каторой надо удалять
            file.open(path, fstream::in | fstream::out | fstream::app);
            string s;
            int strCount=0;
            while (getline(file, s)) { // пока не достигнут конец файла класть очередную строку в переменную (s)
                strCount++;
                if (!(strCount == l || strCount == l + 1 || strCount == l + 2 || strCount == l + 3 || strCount == l + 4)) {
                    FileText.insert(FileText.size(), s); //добавляем строку в переменную
                    FileText.insert(FileText.size(), "\r\n"); //переносим строку
                }
                
            }
            file.close();
            ofstream fs;
            fs.open(path, ios::trunc | ios::binary);
            fs.write(FileText.c_str(), FileText.size()); // запись данных из FileLine в файл
            fs.clear();	//установка флага ошибки в положение "нет ошибки"
            cout << endl << "Книга удалена" << endl;
            
        }
        else if (check == 4) {
            cout << "Введите название книги: ";
            string str;
            getline(cin, str);
            getline(cin, str);

            using input_it = istream_iterator<string>;
            ifstream fin(path);
            if ((find(input_it(fin), input_it(), str) != input_it()) == true)
            {
                cout << "Совпадение найдено\n" << endl;
            }
            else
            {
                cout << "Совпадения нет\n" << endl;
            }
        }
        
        
    } while (true);
    

    return 0;
}

