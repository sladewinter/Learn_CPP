//This header file will hold all the symbolic constants in our program 

//Why use inline? Because inline allows "Multiple definitions". So here whenever we include this
//header into other files, these variables are not defined once for every file, but defined only once
//and all definitions in other files are considered to be of the single variable because its inline
//This allows optimization

//Constexpr means Compile-time constant so allows optimization
//Const means Compile-time OR Run-time constant

namespace constants                      	  //Namespace to hold all our symbolic constants
{

	#ifndef GRAVITY                       //Header Guard for Gravity
	inline constexpr double gravity{9.8};
	#define GRAVITY
	#endif                              //Header Guard ends

	#ifndef MAX_SECONDS               //Header Guard for max_seconds
	inline constexpr int max_seconds{5};
	#define MAX_SECONDS             
	#endif                         //Header Guard ends

}
