#ifndef INTVECTOR_H
#define INTVECTOR_H

/**
 *
 */
class IntVector {
  unsigned length;
  int *elements;
public:
  IntVector(unsigned len);
  ~IntVector();
  unsigned size() const;
  int &at(unsigned i);
  void out(void) const;
};

#endif INTVECTOR_H