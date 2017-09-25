
#include "assignment1.hpp"

// Compute the forward kinematics (only position)
tf::Point ForwardKinematics( double q1, double q2, double q3 ){

  
  // TODO
  // Fill the values of the forward kinematics
  double x, y, z;
  // x = TODO
  // y = TODO
  // z = TODO
  
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
  // J[0][0] = TODO
  // J[0][1] = TODO
  // J[0][2] = TODO
  
  // J[1][0] = TODO
  // J[1][1] = TODO
  // J[1][2] = TODO
  
  // J[2][0] = TODO
  // J[2][1] = TODO
  // J[2][2] = TODO
  
}

