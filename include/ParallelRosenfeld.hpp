#ifndef _LABEL_ROSENFELD_H_
#define _LABEL_ROSENFELD_H_

#include "Region32.hpp"

#include <iostream>
#include <stdint.h>
#include <vector>
#include <omp.h>
using namespace std;

class ParallelRosenfeld{
public:
  ParallelRosenfeld();
  ~ParallelRosenfeld();

  uint32_t line0Labeling4C(unsigned char **X, int i, uint32_t **E, uint32_t* T, int largeur, uint32_t ne);
  uint32_t lineLabeling4C(unsigned char **X, int i, uint32_t **E, uint32_t* T, int largeur, uint32_t ne);
  uint32_t line0Labeling8C(unsigned char **X, int i, uint32_t **E, uint32_t* T, int largeur, uint32_t ne);
  uint32_t lineLabeling8C(unsigned char **X, int i, uint32_t **E, uint32_t* T, int largeur, uint32_t ne);


}

#endif
