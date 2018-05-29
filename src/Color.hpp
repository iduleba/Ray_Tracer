#ifndef COLOR_H_
#define COLOR_H_

using namespace std;

class Color {

  private:
    int red;
    int green;
    int blue;

  public:
    Color(int red, int green, int blue);
    Color(Color *color);
    ~Color() {};
    int Red() const { return red;};
    int Green() const { return green;};
    int Blue() const { return blue;};
    Color operator+(const Color& v) const;
    Color operator*(const float& f) const;
};

#endif
