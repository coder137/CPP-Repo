#pragma once

/**
 */
class Singleton
{
public:
  static Singleton *get();
  void printInputData(int data);

private:
  Singleton() {}
  ~Singleton() {}

  static Singleton *p_i;
};
