#include <iostream>
#include <vector>
#include <omp.h>
#include <Eigen/Dense>
#include "demeter/model/material.hpp"

void CheckOpenMP() {
#if defined(_OPENMP)
  unsigned num_threads = 0;
#pragma omp parallel reduction(+ : num_threads)
  num_threads += 1;
  std::cerr << "OpenMP version " << _OPENMP << " number of threads "
            << num_threads << '\n';
#endif
}

int main() {
  CheckOpenMP();

  using Eigen::MatrixXd;

  MatrixXd m(2, 2);
  m(0, 0) = 3;
  m(1, 0) = 2.5;
  m(0, 1) = -1;
  m(1, 1) = m(1, 0) + m(0, 1);
  std::cout << m << std::endl;

  // using vec = Eigen::ArrayXd;
  // using mat = Eigen::ArrayXXd;

  // vec sigma_t = {0.222222, 0.833333};
  // vec D = 1. / (3. * sigma_t);
  // vec sigma_a{0.010120, 0.080032};
  // vec nusigma_f{0., 0.135};
  // vec sigma_f{0., 0.135};
  // vec chi{1., 0.};
  // mat sigma_s{{0.00, 0.02}, {0.00, 0.00}};

  return 0;
}