#ifndef CUTIE_HPP
#define CUTIE_HPP

#include <string>

// Abstract base class for all cute objects
class Cutie {
  protected:
    std::string description;
    int cuteness_rating;

  public:
    // Constructor sets shared values
    Cutie(std::string description, int cuteness_rating) {
      this->description = description;
      this->cuteness_rating = cuteness_rating;
  }

    // Pure virtual methods each cutie must define
    virtual std::string get_description() = 0;
    virtual int get_cuteness_rating() = 0;
};

#endif