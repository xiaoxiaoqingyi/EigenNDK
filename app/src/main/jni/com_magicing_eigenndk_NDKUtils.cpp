#include <jni.h>
#include <string>
#include <Eigen/Dense>
#include <iostream>
using namespace Eigen;

extern "C"
 jstring
 Java_com_magicing_eigenndk_NDKUtils_invokeCmethod(
        JNIEnv *env,
        jobject /* this */) {

    MatrixXd m(2,2);
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);
   // std::cout << "Here is the matrix m:\n" << m << std::endl;
    VectorXd v(2);
    v(0) = 4;
    v(1) = v(0) - 1;
  // std::cout << "Here is the vector v:\n" << v << std::endl;

     std::string hello = "Hello from C++";
     return env->NewStringUTF(hello.c_str());


  }

