#ifndef INTVECTOR_H
#define INTVECTOR_H

/*neue Funktion print und cross */

class IntVector {
  unsigned length;
  int *elements;
public:
  IntVector(unsigned len);
  ~IntVector();
  unsigned size() const;
  int &at(unsigned i);
  void out(void) const;
  void print() const;
  void cross(const Vector& v);
};

#endif INTVECTOR_H