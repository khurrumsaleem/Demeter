#include "gauss_legendre.hpp"

#include <cmath>
#include <iostream>
#include <Eigen/Dense>

// To do
// 1 - Automatiser le calcul des racines et des poids pour
//     aller jusqua 48 (python)
// Tous les poids sont a diviser par deux
// teta est dans [0,pi] pas besoin des angles teta
// dans [pi,2pi] on fait teta_k+pi avec 
// w_{k+pi} = w_k  

namespace Demeter {

// nteta = 2
template <>
Eigen::ArrayXd GaussLegendre<2>::weights_(1); 
template <>
Eigen::ArrayXd GaussLegendre<2>::costeta_(1); 
template <>
Eigen::ArrayXd GaussLegendre<2>::teta_(1); 
template <>
void GaussLegendre<2>::initialization() {
    weights_ << 2.00000;
    costeta_ << 0.00000;
    teta_    << 0.00000;
}

// nteta = 1
 //ArrayXd  costeta(1);
 //ArrayXd  weights(1);

//  costeta << 0.00000;
//  weights << 2.00000;

//// nteta = 2
// ArrayXd  costeta(2);
// ArrayXd  weights(2);
//
// costeta << -0.57735, 0.57735;
// weights <<  1.00000, 1.00000;
//
//// nteta = 4
// ArrayXd  costeta(3);
// ArrayXd  weights(3);
//
// costeta << -0.339981, 0.339981,
//            -0.861136, 0.861136;
// weights <<  0.652145, 0.652145,
//             0.347855, 0.347855;


// nteta = 6
// nteta = 8
// nteta = 10
// nteta = 12
// nteta = 14
// nteta = 16
// nteta = 18
// nteta = 20
// nteta = 22
// nteta = 24
// nteta = 26
// nteta = 28
// nteta = 30
// nteta = 32
// nteta = 34
// nteta = 36
// nteta = 38
// nteta = 40
// nteta = 42
// nteta = 44
// nteta = 46
// nteta = 48

} // namespace Demeter