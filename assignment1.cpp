
#include "assignment1.hpp"

// Compute the forward kinematics (only position)
tf::Point ForwardKinematics( double q1, double q2, double q3 ){

  
  // TODO
  // Fill the values of the forward kinematics
  double x, y, z;
  x = (17*cos(q1)*cos(q2))/40 - (3829*sin(q1))/20000 + (4869*cos(q1)*cos(q2)*cos(q3))/10000 - (4869*cos(q1)*sin(q2)*sin(q3))/10000
  y = (3829*cos(q1))/20000 + (17*cos(q2)*sin(q1))/40 - (4869*sin(q1)*sin(q2)*sin(q3))/10000 + (4869*cos(q2)*cos(q3)*sin(q1))/10000
  z = 6424583026827617/72057594037927936 - (17*sin(q2))/40 - (4869*sin(q2 + q3))/10000
  
  return tf::Point( x, y, z );
  
}

// Compute and return the Jacobian of the robot given the current joint 
// positions
// input: the input joint state
// output: the 3x3 Jacobian (position only)
void Jacobian( double q1, double q2, double q3, double J[3][3] ){
  
  for( int r=0; r<3; r++ )
    for( int c=0; c<3; c++ )
      J[r][c] = 0.0;
  
  // TODO
  // Fill the values of the Jacobian matrix J
  J[0][0] = (4869*sin(q1)*sin(q2)*sin(q3))/10000 - (17*cos(q2)*sin(q1))/40 - (3829*cos(q1))/20000 - (4869*cos(q2)*cos(q3)*sin(q1))/10000
  J[0][1] = -(cos(q1)*(4869*sin(q2 + q3) + 4250*sin(q2)))/10000
  J[0][2] = -(4869*sin(q2 + q3)*cos(q1))/10000
  
  J[1][0] = (17*cos(q1)*cos(q2))/40 - (3829*sin(q1))/20000 + (4869*cos(q1)*cos(q2)*cos(q3))/10000 - (4869*cos(q1)*sin(q2)*sin(q3))/10000
  J[1][1] = -(sin(q1)*(4869*sin(q2 + q3) + 4250*sin(q2)))/10000
  J[1][2] = -(4869*sin(q2 + q3)*sin(q1))/10000
  
  J[2][0] = 0
  J[2][1] = -(4869*cos(q2 + q3))/10000 - (17*cos(q2))/40
  J[2][2] = -(4869*cos(q2 + q3))/10000

  
}

