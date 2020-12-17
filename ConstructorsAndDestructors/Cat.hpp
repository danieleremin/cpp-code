#ifndef CAT_H
#define CAT_H

class Cat {
private:
  bool happy;
public:
  Cat();
  ~Cat();
  void speak();
  void makeSad();
  std::string name;
};

#endif