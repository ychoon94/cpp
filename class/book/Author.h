/* Header for the Author class (Author.h) */
#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>


class Author {
private:
   std::string name;
   std::string email;
   char gender;   // 'm', 'f', or 'u' for unknown

public:
   Author(std::string name, std::string email, char gender);
   std::string getName() const;
   std::string getEmail() const;
   void setEmail(std::string email);
   char getGender() const;
   void print() const;
};

#endif
