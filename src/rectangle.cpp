#include "../header/rectangle.hpp"

Rectangle::Rectangle() {
    this->width = 0;
    this->height = 0;
}

Rectangle::Rectangle(int w, int h) {
    this->width = w;
    this->height = h;
}

int Rectangle:: get_width() {
    return this->width;
}

int Rectangle:: get_height() {
    return this->height;
}

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}
//add another comment
int Rectangle::area() {
    return this->width * this->width;
}
//comment for lab
int Rectangle::perimeter() {
    return this->width * 4 + this->height * 9;
}
