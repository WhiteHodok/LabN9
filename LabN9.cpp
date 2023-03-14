#include <iostream>
#include <string>
/*
* Вот гайдики, по которым я делал эту лабу :
* https://metanit.com/cpp/tutorial/5.1.php
* https://metanit.com/cpp/tutorial/5.2.php
* https://metanit.com/cpp/tutorial/5.4.php
* https://metanit.com/cpp/tutorial/5.3.php
* https://metanit.com/cpp/tutorial/5.17.php
* https://metanit.com/cpp/tutorial/5.18.php
*/

using namespace std;

class Person {
private:
    string name;
    char gender;
    int age;
    string birthdate;
    string school;
    string city;
    string phone_number;
public:
    // Конструктор по умолчанию
    Person() {
        name = "";
        gender = ' ';
        age = 0;
        birthdate = "";
        school = "";
        city = "";
        phone_number = "";
    }
    // Пользовательский конструктор
    Person(string n, char g, int a, string bd, string sch, string c, string pn) {
        name = n;
        gender = g;
        age = a;
        birthdate = bd;
        school = sch;
        city = c;
        phone_number = pn;
    }
    // Конструктор копирования
    Person(const Person& p) {
        name = p.name;
        gender = p.gender;
        age = p.age;
        birthdate = p.birthdate;
        school = p.school;
        city = p.city;
        phone_number = p.phone_number;
    }
    // Методы get и set для всех переменных
    string get_name() const {
        return name;
    }
    void set_name(string n) {
        name = n;
    }
    char get_gender() const {
        return gender;
    }
    void set_gender(char g) {
        gender = g;
    }
    int get_age() const {
        return age;
    }
    void set_age(int a) {
        age = a;
    }
    string get_birthdate() const {
        return birthdate;
    }
    void set_birthdate(string bd) {
        birthdate = bd;
    }
    string get_school() const {
        return school;
    }
    void set_school(string sch) {
        school = sch;
    }
    string get_city() const {
        return city;
    }
    void set_city(string c) {
        city = c;
    }
    string get_phone_number() const {
        return phone_number;
    }
    void set_phone_number(string pn) {
        phone_number = pn;
    }
};

class Student : public Person {
private:
    string student_id;
public:
    // Пользовательский конструктор
    Student(string n, char g, int a, string bd, string sch, string c, string pn, string sid)
        : Person(n, g, a, bd, sch, c, pn) {
        student_id = sid;
    }
    // Метод для получения номера студенческого билета
    string get_student_id() const {
        return student_id;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    // Создание объектов класса Person и Student
    Person person1("Владислав", 'М', 18, "27.08.2004", "ОМГТУ", "Омск", "8-991-379-47-81");
    Person person2("Иван", 'М', 30, "01.01.1992", "МГТУ им.Баумана", "Москва", "8-999-999-99-99");
    Person person3 = person2;
    Student student1("Мария", 'Ж', 22, "01.01.2000", "СПБГУ", "Санкт-Петербург", "8-888-888-88-88", "123456");

    // Вывод информации о созданных объектах
    cout << "person1: " << person1.get_name() << " " << person1.get_gender() << " " << person1.get_age() << " " << person1.get_birthdate() << " " << person1.get_school() << " " << person1.get_city() << " " << person1.get_phone_number() << endl;
    cout << "person2: " << person2.get_name() << " " << person2.get_gender() << " " << person2.get_age() << " " << person2.get_birthdate() << " " << person2.get_school() << " " << person2.get_city() << " " << person2.get_phone_number() << endl;
    cout << "person3: " << person3.get_name() << " " << person3.get_gender() << " " << person3.get_age() << " " << person3.get_birthdate() << " " << person3.get_school() << " " << person3.get_city() << " " << person3.get_phone_number() << endl;
    cout << "student1: " << student1.get_name() << " " << student1.get_gender() << " " << student1.get_age() << " " << student1.get_birthdate() << " " << student1.get_school() << " " << student1.get_city() << " " << student1.get_phone_number() << " " << student1.get_student_id() << endl;

    return 0;
}

