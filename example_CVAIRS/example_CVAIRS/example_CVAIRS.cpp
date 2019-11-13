#include <iostream>
#include <boost/timer.hpp>
#include <ql/quantlib.hpp>

int main()
{
	boost::timer timer;





    std::cout << "Computation time: " << timer.elapsed() << " seconds" << std::endl; 
	return 0;
}
