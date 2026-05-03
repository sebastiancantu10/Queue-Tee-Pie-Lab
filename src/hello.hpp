#ifndef HELLO_HPP
#define HELLO_HPP

#include <string>
#include "Cutie.hpp"

// Puppy class inherits from Cutie
class Puppy : public Cutie {
    public:
        Puppy() : Cutie("Pristine puppy", 7) {}

        std::string get_description() override {
        return description;
        }

        int get_cuteness_rating() override {
        return cuteness_rating;
        }
};

// Kitty class inherits from Cutie
class Kitty : public Cutie {
    public:
        Kitty() : Cutie("Kissaable kitty", 8) {}

        std::string get_description() override {
        return description;
        }

        int get_cuteness_rating() override {
            return cuteness_rating;
        }
};

// Marmoset class inherits from Cutie
class PygmyMarmoset : public Cutie {
    public:
        PygmyMarmoset() : Cutie("Precious pygmy marmoset", 10) {}

        std::string get_description() override {
            return description;
        }

        int get_cuteness_rating() override {
            return cuteness_rating;
        }
};

// Queue class using array under the hood
class QueueTees {
    private:
        static const int MAX = 5;

        Cutie* items[MAX];

        int front;
        int rear;
        int count;

    public:
        QueueTees();

        void enqueue(Cutie* item);

        Cutie* dequeue();

        int size();
};

#endif
