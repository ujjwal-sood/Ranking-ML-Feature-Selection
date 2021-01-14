#include <shark/ObjectiveFunctions/NegativeAUC.h>

#define BOOST_TEST_MODULE OBJECTIVEFUNCTIONS_AUC
#include <boost/test/unit_test.hpp>
#include <boost/test/floating_point_comparison.hpp>

using namespace shark;
using namespace std;

/// Example taken from AUCCalculator website maintained by Jesse Davis
/// and Mark Goadrich and verified using their java code.
BOOST_AUTO_TEST_SUITE (ObjectiveFunctions_AUC)

BOOST_AUTO_TEST_CASE( AUC_EVAL ) {
	Data<RealVector> prediction(10,RealVector(1));
	Data<unsigned int> label(10,0);

	double values[10] = { .9, 8, .7, .6, .55, .54, .53, .52, .51, .505 };
	unsigned int labels[10] = {1, 1, 0, 1, 1, 1, 0, 0, 1, 0};
	
	for(std::size_t i=0; i<10; i++) {
		prediction.element(i)(0)= values[i];
		label.element(i) = labels[i];
	}

	//AUC<double, unsigned int> auc;
	NegativeAUC<unsigned int, RealVector> auc;
	const double value = -0.75; // negative AUC
	double valueResult = auc.eval(label, prediction);
        BOOST_CHECK_SMALL(value-valueResult, 1.e-13);

	//NegativeAUC<unsigned int, UIntVector> uAuc;
	//valueResult = uAuc.eval(label, label);
        //BOOST_CHECK((valueResult == 1.));
}

BOOST_AUTO_TEST_SUITE_END()